package server;
import entity.Player;

/**
 * ...
 * @author ...
 */
class RoomInfo {
	public var id:Int = -1;
	public var name:String = "Lobby";
	
	public var Player1:Int = -1;
	public var Player2:Int = -1;
	
	public var players:Map<Int, Remote>;
	
	public var maxPlayers:Int = 100;
	public var active:Int = 0;

	public function new() {
		players = new Map<Int, Remote>();
	}
	
}