package states;
import flixel.FlxG;
import flixel.FlxState;
import flixel.ui.FlxButton;
import flixel.text.FlxText;

import server.Start;
import server.Network;
/**
 * ...
 * @author ...
 */
class RoomState extends FlxState {
	
	private var status:FlxText;
	private var players:FlxText;
	private var roomName:FlxText;
	
	private var leaveRoom:FlxButton;
	private var startGame:FlxButton;
	

	override public function create():Void {		
		//Start.instance.Logic.Connect();
		
		roomName = new FlxText(0, 10);
		roomName.text = "Room name: " + Start.instance.Logic.roomInfo.name;
		add(roomName);	
	
		players = new FlxText(0, 140);
		players.text = "Players: " + Start.instance.Logic.stats.playerCount;
		add(players);
		
		var statusTxt = "Disconnected";
		
		status = new FlxText(135, 140);
		status.text = "Status: "+statusTxt;
		add(status);
		
		leaveRoom = new FlxButton(140, 10, "Leave Room", _leaveRoom);
		add(leaveRoom);
		
		startGame = new FlxButton(140, 30, "Start Game", _startGame);
		startGame.active = false;
		startGame.status = FlxButton.PRESSED;
		add(startGame);
		
	}
	
	private function _leaveRoom():Void {
		Start.instance.Logic.sendEvent(Network.JoinRoom, "Lobby");
	}
	
	private function _startGame():Void {
		Start.instance.Logic.sendEvent(Network.StartGame, null); 
	}
	
	override public function update():Void {	
		
		if (Start.instance.Logic.stats.connected) {
			roomName.text = "Room name: " + Start.instance.Logic.roomInfo.name;
			
			players.text = "Players: " + Start.instance.Logic.stats.playerCount + "/" + Start.instance.Logic.roomInfo.maxPlayers;
			
			if (Start.instance.Logic.stats.connected) {
				status.text = "Status: Connected";
			} else {
				status.text = "Status: Disconnected";
			}
			
			if (Start.instance.Logic.stats.playerCount <= 1) {
				startGame.status = FlxButton.PRESSED;
				startGame.active = false;
			} else {
				startGame.status = FlxButton.NORMAL;
				startGame.active = true;
			}
			
			if (Start.instance.Logic.roomInfo.id == -1) {
				FlxG.switchState(new LobbyState());
			}
			
			if (Start.instance.Logic.roomInfo.active == 1) {
				if (Lambda.count(Start.instance.Logic.roomInfo.players) == 2) {					
					FlxG.switchState(new MultiState());					
				}
			}
		}
		
		super.update();
	}	
	
}