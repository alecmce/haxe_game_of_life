import Main;
import nme.display.Bitmap;
import nme.display.Loader;
import nme.events.Event;
import nme.media.Sound;
import nme.net.URLRequest;
import nme.Assets;


class ApplicationMain {
	
	
	private static var completed:Int;
	public static var loaders:Hash <Loader>;
	private static var total:Int;
	
	
	public static function main () {
		
		completed = 0;
		loaders = new Hash <Loader> ();
		total = 0;
		
		
		
		if (total == 0) {
			
			begin ();
			
		} else {
			
			for (path in loaders.keys ()) {
				
				var loader:Loader = loaders.get (path);
				loader.contentLoaderInfo.addEventListener ("complete", loader_onComplete);
				loader.load (new URLRequest (path));
				
			}
			
		}
		
	}
	
	
	private static function begin ():Void {
		
		Main.main ();
		
	}
	

   public static function getAsset(inName:String):Dynamic {
	   
		
		return null;
		
   }
   
   
   
   
   // Event Handlers
   
   
   
   
	private static function loader_onComplete (event:Event):Void {
	   
		completed ++;
		
		if (completed == total) {
			
			begin ();
			
		}
	   
	}
   
   
}


