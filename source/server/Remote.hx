package server;
import flixel.util.FlxRandom;

/**
 * ...
 * @author Jazz Atwal
 */
class Remote {
	public var ID:Int;
	private var Name:String;
	
	public var _keyState:Int;
	public var _lastKeyState:String;
	
	public var isLocal:Bool = false;	

	public var flipX:Bool = false;

	public function new(id:Int = -1) {
		this.ID = id;
		this.Name = "usr" + id;
		
		
	}

	
}