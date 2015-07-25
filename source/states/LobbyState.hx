package states;

import server.Start;

import flixel.FlxG;
import flixel.FlxState;
import flixel.text.FlxText;
import flixel.ui.FlxButton;


/**
 * ...
 * @author Jazz Atwal
 */
class LobbyState extends FlxState {
	private var status:FlxText;
	private var players:FlxText;
	private var reconnect:FlxButton;
	
	
	private var centerX:Int = Std.int(FlxG.width / 2);
	private var centerY:Int = Std.int(FlxG.height / 2);
	
	public function new() {

	}
	
	override public function create():Void {
		status = new FlxText(0, 0);
		status.text = "Status: Disconnected";
		add(status);
		
		players = new FlxText(180, 0);
		players.text = "Players: 0";
		add(players);
		
		Start.instance.Logic.Connect();
		
		super.create();
	}
	
	override public function update():Void {
		super.update();
	}
	
}