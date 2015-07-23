package entity;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxObject;

/**
 * ...
 * @author Henrik Stepanyan
 */
class Player extends FlxSprite {

	var vPos = 2;
	var hPos = 2;
	
	public var _keyState:String;
	public var _lastKeyState:String;
	
	public var isLocal:Bool = false;	

	public var flipX:Bool = false;
	
	public function new() {
		super(37, 55);
		loadGraphic(AssetPaths.megaman_move__png, true, 41, 52);
		animation.add("move", [0, 1, 2, 3], 30, false);
		animation.add("static", [3], 1, true);
		animation.play("static");
	}

	private function movement() {
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
		
		/*
		if (_up && vPos > 1) {
			y-=26;
			animation.play("move");
			vPos--;
			
			
		} else if (_down && vPos < 3) {
			y+=26;
			animation.play("move");
			vPos++;
		} else if (_left && hPos > 1) {
			x-=40;
			animation.play("move");
			hPos--;
		} else if (_right && hPos < 3) {
			x+=40;
			animation.play("move");
			hPos++;
		}*/
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
			x += 40;
			
			_keyState = null;
			animation.play("move");
		} else if (_keyState == "Right" && hPos < 3) {
			hPos++;
			x -= 40;			
			
			_keyState = null;
			animation.play("move");
		}
		super.update();
	}

}
