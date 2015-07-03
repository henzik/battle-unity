package entity;

import flixel.FlxSprite;
	

/**
 * ...
 * @author Jazz Atwal
 */
class Background extends FlxSprite {

	public function new() {
		super(0, 0);
		loadGraphic(AssetPaths.game_background_sprites__png, true, 32, 32);
		animation.add("background", [0, 1, 2, 3], 6, true);
		animation.play("background");
		
	}
	
}