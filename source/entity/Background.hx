package entity;

import flixel.FlxSprite;
import flixel.FlxObject;
import flixel.group.FlxTypedGroup;

/**
 * ...
 * @author Jazz Atwal
 */
class Background extends FlxTypedGroup<FlxSprite> {

	var container = null;
	var masterX = 0.0;
	var resetTimer = 0;

	public function new() {
		super(100);
		render();
	}

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

	public function move():Void {
		forEach(animate);
	}

	public function animate(member:FlxObject):Void {
		member.y += 0.5;
		member.x += 0.5;
		masterX  += 0.5;
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
