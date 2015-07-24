package server;

/**
 * ...
 * @author Jazz Atwal
 */

class Start {
	public var Logic:Client;
    public static var instance(get, null):Start;
	
    private static function get_instance():Start {
        if(instance == null) {
            instance = new Start();
        }
        return instance;
    }
	
	private function new() {
		Logic = new Client();
	}
}