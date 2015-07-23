package server;
import flixel.util.FlxRandom;

/**
 * ...
 * @author Jazz Atwal
 */
class Remote {
	public var ID:Int;
	private var Name:String;
	
	public var _keyState:String;
	public var _lastKeyState:String;
	
	public var isLocal:Bool = false;	

	public var flipX:Bool = false;

	public function new(id:Int) {
		this.ID = id;
		this.Name = "usr" + id;
		
		
	}

	
}