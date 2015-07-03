package states;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.group.FlxGroup;
import flixel.group.FlxTypedGroup;
import flixel.text.FlxText;
import flixel.ui.FlxButton;
import flixel.util.FlxMath;

/**
 * A FlxState which can be used for the actual gameplay.
 */
class PlayState extends FlxState {
	/**
	 * Function that is called up when to state is created to set it up. 
	 */
	private var red_platform:FlxSprite;
	private var centerX:Int = Std.int(FlxG.width / 2);
	
	
	override public function create():Void {
		
		
		var redPlatform = new FlxTypedGroup<FlxSprite>(9);
		
		for (0 in 9 ) {
			var red_platform = new FlxSprite(centerX, 100, AssetPaths.platform_red_normal__png);
			red_platform.kill();
			red_platform.add(red_platform);
		}
		
		super.create();		
	}
	
	/**
	 * Function that is called when this state is destroyed - you might want to 
	 * consider setting all objects this state uses to null to help garbage collection.
	 */
	override public function destroy():Void
	{
		super.destroy();
	}

	/**
	 * Function that is called once every frame.
	 */
	override public function update():Void
	{
		super.update();
	}	
}