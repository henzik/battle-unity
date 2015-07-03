package;

import sys.net.Socket;
import sys.net.Host;
/**
 * ...
 * @author Jazz Atwal
 */
class ClientConnectTest {
	public function new() {
		
		var s = new Socket();
        s.connect(new Host("192.168.1.26"), 5000);
        while( true ) {
            var l = s.input.readLine();
            trace(l);
            if( l == "exit" ) {
                s.close();
                break;
            }
        }		
		
	}
	
}