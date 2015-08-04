package states;

import server.Start;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.tweens.FlxTween;
import flixel.ui.FlxButton;

/**
 * A FlxState which can be used for the game's menu.
 */
class MenuState extends FlxState {
		
	private var _btnPlay:FlxButton;
	private var _background:FlxSprite;
	/**
	 * Function that is called up when to state is created to set it up. 
	 */
	
	private var gameWidth:Int = FlxG.width;
	private var gameHeight:Int = FlxG.height;
	
	override public function create():Void {
		Start.instance.Logic.Connect();
		
		FlxG.sound.playMusic(AssetPaths.maintheme__wav, 0.5);		
				
		_background = new FlxSprite(0, 0, AssetPaths.menu_background__jpg);
		_background.alpha = 0;				
		
		add(_background);

		FlxTween.tween(_background, { alpha: 1 }, 2.0, { complete: Show_button } );
		
		var _btnTest = new FlxButton(0, 0, "Lobby", clickTest);
		_btnTest.setPosition((gameWidth - _btnTest.width) / 2, (gameHeight - _btnTest.height / 2) - 20);
		add(_btnTest);
		
		super.create();
	}
	
	private function Show_button(tween:FlxTween):Void {
		_btnPlay = new FlxButton(0, 0, null, clickPlay);
		_btnPlay.loadGraphic(AssetPaths.press_start__png, false, 127, 10);
		_btnPlay.setPosition((gameWidth - _btnPlay.width) / 2, (gameHeight - _btnPlay.height / 2) - 40);
		
		_btnPlay.onDown.sound = FlxG.sound.load(AssetPaths.Teleport__wav, 1, false, true, false);
		add(_btnPlay);
		

	}
	
	private function clickPlay():Void {
		FlxG.switchState(new PlayState());
	}
	
	private function clickTest():Void {
		FlxG.switchState(new LobbyState());
	}
	/**
	 * Function that is called when this state is destroyed - you might want to 
	 * consider setting all objects this state uses to null to help garbage collection.
	 */
	override public function destroy():Void  {
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