package states;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.text.FlxText;
import flixel.ui.FlxButton;
import flixel.util.FlxMath;
import entity.Player;

import server.Start;
import server.Network;
import server.Client;

/**
 * A FlxState which can be used for the actual gameplay.
 */
class MultiState extends FlxState {
	/**
	 * Function that is called up when to state is created to set it up.
	 */
	//private var player:Player;
	private var local:Player;
	private var remote:Player;
	
	private var status:FlxText;
	private var players:FlxText;
	
	private var reconnect:FlxButton;
	
	private var red_platform:FlxSprite;
	private var centerX:Int = Std.int(FlxG.width / 2);
	private var centerY:Int = Std.int(FlxG.height / 2);

	override public function create():Void {

		generatePlatforms();
		
		var Up = new FlxButton(80, centerY - 70, "Up", CBup);
		var Down = new FlxButton(80, centerY - 40, "Down", CBdown);
		var Left = new FlxButton(40, centerY - 55, "Left", CBleft);
		var Right = new FlxButton(130, centerY - 55, "Right", CBright);
		
		add(Up);
		add(Down);
		add(Left);
		add(Right);
		
		//player = new Player(37, 55, "right");
		
		//enemy = new Remote(163, 55, "left");
		//add(enemy);
		
		status = new FlxText(0, 0);
		status.text = "Status: Disconnected";
		add(status);
		
		players = new FlxText(180, 0);
		players.text = "Players: 0";
		add(players);
		
		Start.instance.Logic.Connect();
		
		
		reconnect = new FlxButton(0, 150, "Reconnect", restartCon);
		add(reconnect);
		
		super.create();
	}
	
	private function restartCon():Void {
		trace("restarting...");
		status.text = "Reconnecting...";
		Start.instance.Logic.Connect();
	}
	
	/**
	 * Function that is called once every frame.
	 */		

	override public function update():Void {
		if (Start.instance.Logic.Connected) {
			status.text = "Status: Connected";

			var localDetails = Start.instance.Logic.playerList[Start.instance.Logic.id];
			if (localDetails != null) {
				if (local == null) {
					local = new Player();						
					local.isLocal = true;
					add(local);
					
				}

				local._keyState = localDetails._keyState;
				//trace("Keystate: " + local._keyState);
				Start.instance.Logic.playerList[Start.instance.Logic.id]._keyState = -1;
			}
			
			var remoteDetails = Start.instance.Logic.playerList[100];
			
			if (remoteDetails != null) {
				if (remote == null && Start.instance.Logic.LobbyCount > 1) {						
					remote = new Player(true);
					add(remote);
				}					
				
				
				remote._keyState = remoteDetails._keyState;
				Start.instance.Logic.playerList[100]._keyState = -1;				
			}

		} else {
			status.text = "Status: Disconnected";
		}
		
		players.text = "Players: " + Start.instance.Logic.LobbyCount;
		
		super.update();
	}

	public function CBup():Void {
		Start.instance.Logic.sendEvent(Network.PlayerAControl, "0");
		//client.player.
	}
	
	public function CBdown():Void {
		Start.instance.Logic.sendEvent(Network.PlayerAControl, "1");
	}
	
	public function CBleft():Void {
		Start.instance.Logic.sendEvent(Network.PlayerAControl, "2");		
	}

	public function CBright():Void {
		Start.instance.Logic.sendEvent(Network.PlayerAControl, "3");
	}
	
	public function generatePlatforms():Void {
		var width = 6;
		var height = 3;
		var xLocation = 0;
		var yLocation = centerY-15;

		for (i in 0...width) {
			for (j in 0...height) {
			var red_platform = new FlxSprite(xLocation, yLocation, AssetPaths.platform_red_normal__png);
			var blue_platform = new FlxSprite(xLocation, yLocation, AssetPaths.platform_blue_normal__png);

			if(i < 3) {
				add(red_platform);
			} else {
				add(blue_platform);
			}
			yLocation += 26;

			}

			yLocation = centerY-15;
			xLocation += 40;
		}

	}

	/**
	 * Function that is called when this state is destroyed - you might want to
	 * consider setting all objects this state uses to null to help garbage collection.
	 */
	override public function destroy():Void {
		Start.instance.Logic.socket.close();
		super.destroy();
	}
	
}
