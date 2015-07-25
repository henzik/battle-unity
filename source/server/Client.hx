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
	
	public var socket:Socket;
	
	public var Connected:Bool = false;
	public var LobbyCount:Dynamic;
	
	public var playerList:Map<Int,Remote> = new Map<Int, Remote>();
	//public var remote:Remote;
	
	
	public function new() {

	}
	
	public function Connect():Void {
		socket = new Socket();
		socket.addEventListener(Event.CONNECT, onSocketConnect);
		socket.addEventListener(Event.CLOSE, onSocketClose);
		socket.addEventListener(ProgressEvent.SOCKET_DATA, onReceiveSocketData);
		
		socket.connect("86.8.168.12", 5000);
		
	}
	
	private function onSocketConnect(e:Event = null):Void {
		Connected = true;

		sendEvent(Network.PlayerConnectReqID, null);
				
		trace("Connected to server\n");		
		//remote = new Remote();		
	}
	
	private function onSocketClose(e:Event = null):Void {
		trace("Disconnected from server\n");
		LobbyCount = 0;
		//player.destroy();
		Connected = false;
	}
	
	private function onReceiveSocketData(e:ProgressEvent):Void {
		var message:String = socket.readUTFBytes(socket.bytesAvailable);
		
		var data = Unserializer.run(message);

		switch (data[0]) {
			case Network.PlayerConnectReqID:
				id = Std.parseInt(Std.string(data[1]));
				trace("ID Received: " + data[1] + " ID Saved: "+ id);								
				var local = new Remote(id);
				local.isLocal = true;
			
				
				playerList.set(id, local);
				
				
			case Network.PlayersInLobby:				
				LobbyCount = data[1];
				if (playerList.exists(id)) {
					if (!playerList.exists(100)) {
						var remote = new Remote();
						playerList.set(100, remote);
					}
				}
				
				
				
			case Network.PlayerAControl:
				trace("Player A Control(" + data[1] + ") ID: " + id);
				
				var Recv:Int = Std.parseInt(Std.string(data[1]));
				var Input:Int = Std.parseInt(Std.string(data[2]));
				
				
				//trace("CLIENT ID: " + this.id);
				if (id == Recv) {
					var player = playerList.get(this.id);
				
					player.isLocal = true;
					player._keyState = Input;
				
					playerList.set(id, player);
				}
			
			case Network.PlayerBControl:
				//trace("Player B Control(" + data[1] + ")ID: " + id);
				
				var Recv:Int = Std.parseInt(Std.string(data[1]));
				var Input:Int = Std.parseInt(Std.string(data[2]));
				//trace("PLAYER B CONTROL - RECEIVED ID: " + data[1] + "Input: " + data[2]);
				for (player in playerList) {					
					if (player.ID == -1) {						
						player._keyState = Input;
						
						playerList.set(player.ID, player);
						trace("Player keystate: " + player._keyState);
					}
				}
				//for (player in Start.instance.Logic.playerList) {
					//if (player.
				//}
				/*for (player in playerList) {
					if (player.ID != Recv) {
						trace("Player ID: " + player.ID + "Saved ID: " + id);
						player._keyState = Input;
						playerList.set(player.ID, player);
					}
				}*/
				
			case Network.LobbyDetails:
				trace("Lobby Details");
				
			case Network.StartAutoAttack:
				trace("Start Auto Attack");
			
			case Network.EndAutoAttack:
				trace("Start Auto Attack");
				
				
				//remote._lastKeyState = remote._keyState;
				//remote._keyState = Input;				


		}		
	}
	
	public function sendEvent(event:Network, value:Dynamic, fast:Bool = false) {
		var data:Dynamic = [event, value, id];
		var serialiser = new Serializer();
		serialiser.serialize(data);		
		
		//socket.writeUTF("Hello");

		var hxBytes = Bytes.ofString(serialiser.toString());
		var opBytes = ByteArray.fromBytes(hxBytes);
		
		socket.writeBytes(opBytes);
		socket.flush();
	}
}