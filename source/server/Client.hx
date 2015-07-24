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

	public var ID:Int;
	
	private var socket:Socket;
	
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
				var id = Std.parseInt(Std.string(data[1]));
				ID = id;
				
				var local = new Remote(id);
				local.isLocal = true;
				trace("ID: " + id);
				
				playerList.set(id, local);
				
			case Network.PlayersInLobby:				
				LobbyCount = data[1];
				
				var id:Int = LobbyCount + 1;
				var remote = new Remote(id);
				playerList.set(id, remote);
				
			case Network.PlayerAControl:
				trace("Player A Control("+data[1]+")");
				var Input:Int = Std.parseInt(Std.string(data[1]));
				var player = playerList.get(ID);
				player.isLocal = true;
				player._keyState = Input;
				
				playerList.set(ID, player);
			
			case Network.PlayerBControl:
				trace("Player B Control("+data[1]+")");
				var Input:Int = Std.parseInt(Std.string(data[1]));
				
				for (player in playerList) {
					if (!player.isLocal) {
						player._keyState = Input;
						playerList.set(player.ID, player);
					}
				}
				
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
		var data:Dynamic = [event, value];
		var serialiser = new Serializer();
		serialiser.serialize(data);		
		
		//socket.writeUTF("Hello");

		var hxBytes = Bytes.ofString(serialiser.toString());
		var opBytes = ByteArray.fromBytes(hxBytes);
		
		socket.writeBytes(opBytes);
		socket.flush();
	}
}