package entity;

import flixel.FlxSprite;
import flixel.FlxObject;
import flixel.group.FlxTypedGroup;

/**
 * ...
 * @author Henrik Stepanyan
 */
class Background extends FlxTypedGroup<FlxSprite> {

	private var container = null;
	private var masterX = 0.0;
	private var resetTimer = 0;

	public function new() {
		super(100);
		render();
	}

	/* build a grid of background entities */
	private function render():Void {
		var yPos = -96;
		var xPos = -96;
		for(i in 0...65) {
			if(i%10 == 0 && i != 0){
				yPos += 48;
				xPos = -128;
			}
			add(generateEntity(xPos,yPos));
			xPos += 48;
		}
	}

	private function generateEntity(xPos,yPos):FlxSprite {
		var graphic = new FlxSprite(xPos,yPos);
		graphic.loadGraphic(AssetPaths.game_background_sprites__png, true, 32, 32);
		graphic.animation.add("background", [0, 1, 2, 3], 6, true);
		graphic.animation.play("background");
		return graphic;
	}

	public function getGroup():FlxTypedGroup<FlxSprite> {
		return this;
	}

	/* function called to start moving the backgrounds */
	public function move():Void {
		forEach(animate);
	}

	/* weird spaghetti way but waits some times, then moves entities back */
	public function animate(member:FlxObject):Void {
		member.y += 0.25;
		member.x += 0.25;
		masterX  += 0.25;
		if(masterX >= 256.0*12) {
			member.x -= 48;
			member.y -= 48;
			resetTimer++;
		}
		if (resetTimer==65) {
			masterX = 0;
			resetTimer = 0;
		}
	}
}
