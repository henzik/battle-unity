package states;

import server.Start;
import server.Network;

import flixel.FlxG;
import flixel.FlxState;
import flixel.text.FlxText;
import flixel.ui.FlxButton;


/**
 * ...
 * @author Jazz Atwal
 */
class LobbyState extends FlxState {

	
	private var rooms:FlxText;
	private var status:FlxText;
	private var players:FlxText;
	private var roomName:FlxText;
	
	private var createRoom:FlxButton;
	private var joinRoom:FlxButton;
	
	private var centerX:Int = Std.int(FlxG.width / 2);
	private var centerY:Int = Std.int(FlxG.height / 2);
	
	override public function create():Void {		
		roomName = new FlxText(0, 10);
		roomName.text = "Room name: " + Start.instance.Logic.roomInfo.name;
		add(roomName);
		
		rooms = new FlxText(150, 130);
		rooms.text = "Rooms: " + Start.instance.Logic.stats.roomCount;
		add(rooms);
	
		players = new FlxText(0, 140);
		players.text = "Players: " + Start.instance.Logic.stats.playerCount;
		add(players);
		
		var statusTxt = "Disconnected";
		
		status = new FlxText(135, 140);
		status.text = "Status: "+statusTxt;
		add(status);
		
		createRoom = new FlxButton(140, 10, "Create Room", _createRoom);
		add(createRoom);
		
		joinRoom = new FlxButton(140, 30, "Join Room", _joinRoom);
		add(joinRoom);
		
		super.create();
	}
	
	private function _createRoom() {
		Start.instance.Logic.sendEvent(Network.CreateRoom, "Henmanz");
	}
	
	private function _joinRoom() {
		Start.instance.Logic.sendEvent(Network.JoinRoom, "Henmanz");
	}
	
	override public function update():Void {	
		
		if (Start.instance.Logic.stats.connected) {
			roomName.text = "Room name: " + Start.instance.Logic.roomInfo.name;
			
			rooms.text = "Rooms: " + Start.instance.Logic.stats.roomCount;
			
			players.text = "Players: " + Start.instance.Logic.stats.playerCount + "/" + Start.instance.Logic.roomInfo.maxPlayers;
			
			if (Start.instance.Logic.stats.connected) {
				status.text = "Status: Connected";
			} else {
				status.text = "Status: Disconnected";
			}
			
			if (Start.instance.Logic.roomInfo.name != "Lobby") {
				FlxG.switchState(new RoomState());
			}
		}
		
		
		super.update();
	}
	
}