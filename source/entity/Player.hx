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

  public function new(xPos,yPos, facing) {
    super(xPos,yPos);
    loadGraphic(AssetPaths.megaman_move__png, true, 41, 52);
    animation.add("move", [0, 1, 2, 3], 60, false);
    animation.add("static", [3], 1, true);
    animation.play("static");
    if(facing == "left") {
      flipX = true;
    }
  }

  public function getSprite():FlxSprite {
    return this;
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
    }
  }

  override public function update():Void
  {
    movement();
    super.update();
  }

}
