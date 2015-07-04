package states;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.group.FlxGroup;
import flixel.group.FlxTypedGroup;
import flixel.text.FlxText;
import flixel.ui.FlxButton;
import flixel.util.FlxMath;
import entity.Background;
import entity.Player;

/**
 * A FlxState which can be used for the actual gameplay.
 */
class PlayState extends FlxState {
	/**
	 * Function that is called up when to state is created to set it up.
	 */
	private var red_platform:FlxSprite;
	private var centerX:Int = Std.int(FlxG.width / 2);
	private var centerY:Int = Std.int(FlxG.height / 2);

	var background = null;
	var megaman = null;
	var megaman2 = null;


	override public function create():Void {
		bgColor = 0xffc0f8c8;
		background = new Background();
		megaman = new Player(43,65, "right");
		megaman2 = new Player(163,65, "left");

		for(i in 0...background.getGroup().length) {
			add(background.getGroup().members[i]);
		}
		generatePlatforms();

		add(megaman);
		add(megaman2);

		//var client = new ClientConnectionTest(); //If server is not running will crash program

		super.create();
	}


	/**
	 * Function that is called once every frame.
	 */
	override public function update():Void
	{
		background.move();
		super.update();
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
	override public function destroy():Void
	{
		super.destroy();
	}
}
