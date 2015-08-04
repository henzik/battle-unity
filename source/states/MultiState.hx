package states;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.text.FlxText;
import flixel.ui.FlxButton;
import flixel.util.FlxMath;
import entity.Player;
import server.Remote;

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
		
	private var red_platform:FlxSprite;
	private var centerX:Int = Std.int(FlxG.width / 2);
	private var centerY:Int = Std.int(FlxG.height / 2);
	
	private var ping:FlxText;

	override public function create():Void {
		generatePlatforms();
		
		local = new Player();
		local.isLocal = true;
		local.kill();
		add(local);
		
		remote = new Player(true);
		remote.kill();
		add(remote);
		
		status = new FlxText(0, 0);
		status.text = "Status: Disconnected";
		add(status);
		
		ping = new FlxText(100, 0);
		ping.text = "Ping: null";
		
		super.create();
	}
	
	/**
	 * Function that is called once every frame.
	 */
	override public function update():Void {
		if (Start.instance.Logic.stats.connected) {
			status.text = "Status: Connected";
			var Player1 = Start.instance.Logic.roomInfo.players.get(Start.instance.Logic.roomInfo.Player1);
			var Player2 = Start.instance.Logic.roomInfo.players.get(Start.instance.Logic.roomInfo.Player2);
			
			if (Player1 != null) {
				if (Player1.ID == Start.instance.Logic.id) {				
					if (!local.alive) {
						trace("Does not exist!");
						local.revive();
					}
					
					local._keyState = Player1._keyState;
					Start.instance.Logic.roomInfo.players[Player1.ID]._keyState = -1;
				} else {
					if (!remote.alive) {
						trace("Attempted to revive");
						remote.revive();
					}
				
					remote._keyState = Player1._keyState;
					Start.instance.Logic.roomInfo.players[Player1.ID]._keyState = -1;
				}
			} 
			
			if (Player2 != null) {				
				if (Player2.ID == Start.instance.Logic.id) {
					if (!local.alive) {
						trace("Does not exist!");
						local.revive();
					}
					
					local._keyState = Player2._keyState;
					Start.instance.Logic.roomInfo.players[Player2.ID]._keyState = -1;
				} else {
					if (!remote.alive) {
						trace("Attempted to revive");
						remote.revive();
					}
				
					remote._keyState = Player2._keyState;
					Start.instance.Logic.roomInfo.players[Player2.ID]._keyState = -1;
				}
			}

			
			
			
		} else {
			status.text = "Status: Disconnected";
		}
		
		
		super.update();
		
	}

	public function generatePlatforms():Void {
		var width = 6;
		var height = 3;
		var xLocation = 0;
		var yLocation = centerY;

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

			yLocation = centerY;
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
