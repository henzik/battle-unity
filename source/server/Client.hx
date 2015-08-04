package server;

import flixel.util.FlxRandom;
import haxe.io.BytesOutput;
import haxe.Serializer;
import haxe.Unserializer; 
import haxe.io.Bytes;
import openfl.utils.ByteArray;


import server.Network;

#if neko 
import neko.Lib;
#end

import openfl.net.Socket;
import openfl.events.Event;
import openfl.events.ProgressEvent;
/**
 * ...
 * @author Jazz Atwal
 */
class Client {

	public var id:Int = -1;
	
	public var stats:Stats;
	public var socket:Socket;
	
	public var roomInfo:RoomInfo;
	//public var remote:Remote;
	
	public function new () {}

	public function Connect():Void {
		stats = new Stats();
		roomInfo = new RoomInfo();
	
		socket = new Socket();
		socket.addEventListener(Event.CONNECT, onSocketConnect);
		socket.addEventListener(Event.CLOSE, onSocketClose);
		socket.addEventListener(ProgressEvent.SOCKET_DATA, onReceiveSocketData);

		socket.connect("86.8.168.12", 5000);	
		
	}
	
	private function onSocketConnect(e:Event = null):Void {
		stats.connected = true;
		sendEvent(Network.PlayerConnectReqID, null);
				
		trace("Connected to server\n");		
	}
	
	private function onSocketClose(e:Event = null):Void {
		trace("Disconnected from server\n");
		stats.playerCount = 0;

		stats.connected = false;
	}
	
	private function onReceiveSocketData(e:ProgressEvent):Void {
		var message:String = socket.readUTFBytes(socket.bytesAvailable);		
		var data = Unserializer.run(message);

		switch (data[0]) {
			case Network.PlayerConnectReqID:
				id = Std.parseInt(Std.string(data[1]));
				trace("Client ID: "+id);
				
			case Network.PlayersInRoom:								
				stats.playerCount = Std.parseInt(Std.string(data[1]));
				trace("Room Count: " + stats.playerCount);

			case Network.CreateRoom:
				
				if (Std.string(data[1]) == "true") {
					trace("Player("+this.id+") has created the room: " + data[3]);
					
					roomInfo.id = Std.parseInt(Std.string(data[2]));
					roomInfo.name = Std.string(data[3]);
					roomInfo.maxPlayers = Std.parseInt(Std.string(data[4]));
					
				} else {
					trace("Player("+this.id+") has failed to create the room");
				}
				
			
			case Network.JoinRoom:
								
				if (Std.string(data[1]) == "true") {
					trace("Player("+this.id+") has successfully joined the room: " + data[2]);
					
					roomInfo.name = Std.string(data[3]);										
					roomInfo.maxPlayers = Std.parseInt(Std.string(data[4]));
					roomInfo.id = (roomInfo.name == "Lobby") ? -1 : Std.parseInt(Std.string(data[2]));
					
				} else { 
					trace("Player("+this.id+") has failed to join the room");
				}
				
			case Network.StartGame:
				var active = Std.parseInt(Std.string(data[1]));
				
				var player1 = Std.parseInt(Std.string(data[2]));
				var player2 = Std.parseInt(Std.string(data[3]));
				
				roomInfo.active = active;
				
				roomInfo.Player1 = player1;
				roomInfo.Player2 = player2;
				
				var setupPlayer1 = new Remote(player1);
				var setupPlayer2 = new Remote(player2);
				
				if (player1 == this.id) {
					setupPlayer1.isLocal = true;
				} else if (player2 == this.id) {
					setupPlayer2.isLocal = true;
				}
				
				roomInfo.players.set(player1, setupPlayer1);
				roomInfo.players.set(player2, setupPlayer2);
				
			case Network.PlayerAControl:								
				var Recv:Int = Std.parseInt(Std.string(data[1]));
				var Input:Int = Std.parseInt(Std.string(data[2]));
				trace("Local control: " + Recv + " Input - " + Input);		
				
				if (id == Recv) {
					var player = roomInfo.players.get(this.id);
				
					player.isLocal = true;
					player._keyState = Input;
				
					roomInfo.players.set(id, player);
				}
			
			case Network.PlayerBControl:								
				var Recv:Int = Std.parseInt(Std.string(data[1]));
				var Input:Int = Std.parseInt(Std.string(data[2]));
				trace("Remote control: " + Recv + " Input - " + Input);
				
				for (player in roomInfo.players) {
					if (player.ID != this.id) {
					
						player.isLocal = false;
						player._keyState = Input;
					
						roomInfo.players.set(player.ID, player);
					}
				}
				

			//var send:Dynamic = [Network.StartGame, session.active, session.Player1.ID, session.Player2.ID];

			case Network.LobbyDetails:
				trace("Lobby Details");				

		}		
	}
	
	
	
	public function sendEvent(event:Network, value:Dynamic, fast:Bool = false) {
		if (stats.connected) {
			var data:Dynamic = [event, id, value];
			var serialiser = Serializer.run(data).toString();

			var hxBytes = Bytes.ofString(serialiser);
			var opBytes = ByteArray.fromBytes(hxBytes);
			
			socket.writeBytes(opBytes);
			socket.flush();
		}
	}
}