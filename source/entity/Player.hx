package entity;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxObject;
import flixel.ui.FlxButton;
import flixel.ui.FlxVirtualPad;

import server.Network;
import server.Start;

/**
 * ...
 * @author Henrik Stepanyan
 */
class Player extends FlxSprite {

	public var _keyState:Int;
	public var id:Int = -1;

	public var vPos = 2;
	
	public var hPos = 2;
	public var isLocal:Bool = false;
	
	#if mobile
	private var _virtualPad:FlxVirtualPad;
	#end
	
	public function new(flip:Bool = false) {
		
		if (flip) {
			var rightX = (FlxG.width / 2) + 43;
			
			#if windows
			var rightY = (FlxG.height / 2);
			#end
			
			#if android 
			var rightY = (FlxG.height / 2) - 15;
			#end
			trace("Flipped: " + rightY);
			super(rightX, rightY);
			flipX = true;
		} else {
			var leftX = (FlxG.width / 2) - 83;
			
			#if windows
			var leftY = (FlxG.height / 2);
			#end
			#if android 
			var leftY = (FlxG.height / 2) - 15;
			#end
			trace("Flipped: " + leftY);
			super(leftX, leftY);
		}
		
		#if mobile
		_virtualPad = new FlxVirtualPad(FULL, NONE);
		_virtualPad.alpha = 0.5;
		FlxG.state.add(_virtualPad);
		#end		
		
		loadGraphic(AssetPaths.megaman_move__png, true, 41, 52);
		animation.add("move", [0, 1, 2, 3], 30, false);
		animation.add("static", [3], 1, true);
		animation.play("static");		
	}

	override public function update():Void {
		
		if (_keyState == 0 && vPos > 1) {
			vPos--;
			y -= 26;
			
			_keyState = -1;
			animation.play("move");
		} else if (_keyState == 1 && vPos < 3) {
			vPos++;
			y += 26;
			
			_keyState = -1;
			animation.play("move");
		} else if (_keyState == 2 && hPos > 1) {
			hPos--;
			if (isLocal) {
				x -= 40;
			} else {
				x += 40;
			}
			
			_keyState = -1;
			animation.play("move");
		} else if (_keyState == 3 && hPos < 3) {
			hPos++;		
			if (isLocal) {
				x += 40;
			} else {
				x -= 40;
			}
			
			_keyState = -1;
			animation.play("move");
		}
		
		if (isLocal) {
			#if mobile
				if (_virtualPad.buttonUp.status == FlxButton.PRESSED) {
					Start.instance.Logic.sendEvent(Network.PlayerAControl, "0");
				} else if (_virtualPad.buttonDown.status == FlxButton.PRESSED) {
					Start.instance.Logic.sendEvent(Network.PlayerAControl, "1");
				} else if (_virtualPad.buttonLeft.status == FlxButton.PRESSED) {
					Start.instance.Logic.sendEvent(Network.PlayerAControl, "2");
				} else if (_virtualPad.buttonRight.status == FlxButton.PRESSED) {
					Start.instance.Logic.sendEvent(Network.PlayerAControl, "3");
				}
			#else
		// Send Local player commands
			if (FlxG.keys.anyJustPressed(["Up","W"]) && vPos > 1) {				
				Start.instance.Logic.sendEvent(Network.PlayerAControl, "0");
				//if (local != null) local._keyState = "Up";
			} else if (FlxG.keys.anyJustPressed(["Down", "S"]) && vPos < 3) {
				Start.instance.Logic.sendEvent(Network.PlayerAControl, "1");
				//if (local != null) local._keyState = "Down";
			} else if (FlxG.keys.anyJustPressed(["Left", "A"]) && hPos > 1) {
				Start.instance.Logic.sendEvent(Network.PlayerAControl, "2");
				//if (local != null) local._keyState = "Left";
			} else if (FlxG.keys.anyJustPressed(["Right", "D"]) && hPos < 3) {
				Start.instance.Logic.sendEvent(Network.PlayerAControl, "3");
				//if (local != null) local._keyState = "Right";
			}
			#end
		}
		super.update();
	}
}
