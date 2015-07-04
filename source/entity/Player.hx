package entity;

import flixel.FlxSprite;
import flixel.FlxObject;

/**
 * ...
 * @author Henrik Stepanyan
 */
class Player extends FlxSprite {

  public function new() {
    super(0,0);

    loadGraphic(AssetPaths.megaman__png);
  }

  public function getSprite():FlxSprite {
    return this;
  }

}
