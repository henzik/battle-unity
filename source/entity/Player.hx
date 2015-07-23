package entity;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxObject;

/**
 * ...
 * @author Henrik Stepanyan
 */
class Player extends FlxSprite {

	public var _keyState:String;

	public var vPos = 2;
	public var hPos = 2;
	
	
	public function new(flip:Bool = false) {
		if (flip) {
			super(163, 55);
			flipX = true;
		} else {
			super(37, 55);
		}
		loadGraphic(AssetPaths.megaman_move__png, true, 41, 52);
		animation.add("move", [0, 1, 2, 3], 30, false);
		animation.add("static", [3], 1, true);
		animation.play("static");			
	}

	override public function update():Void {
		if (_keyState == "Up" && vPos > 1) {
			vPos--;
			y -= 26;
			
			_keyState = null;
			animation.play("move");
		} else if (_keyState == "Down" && vPos < 3) {
			vPos++;
			y += 26;
			
			_keyState = null;
			animation.play("move");
		} else if (_keyState == "Left" && hPos > 1) {
			hPos--;
			if (flipX) {
				x += 40;
			} else {
				x -= 40;
			}
			
			_keyState = null;
			animation.play("move");
		} else if (_keyState == "Right" && hPos < 3) {
			hPos++;
			
			if (flipX) {
				x -= 40;
			} else {
				x += 40;
			}			
			
			_keyState = null;
			animation.play("move");
		}
		
		var _up:Bool = false;
		var _down:Bool = false;
		var _left:Bool = false;
		var _right:Bool = false;

		_up = FlxG.keys.anyJustPressed(["UP", "W"]);
		_down = FlxG.keys.anyJustPressed(["DOWN", "S"]);
		_left = FlxG.keys.anyJustPressed(["LEFT", "A"]);
		_right = FlxG.keys.anyJustPressed(["RIGHT", "D"]);

		if (_up && _down)
			 _up = _down = false;
		if (_left && _right)
			 _left = _right = false;
			 
		super.update();
	}
}
