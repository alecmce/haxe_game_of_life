package ;
import flash.display.MovieClip;
import flash.display.Sprite;
import flash.display.Stage;
import flash.display.StageScaleMode;
import flash.display.StageAlign;
import flash.events.MouseEvent;
import flash.Lib;

/**
 * ...
 * @author Mike Cann & Alec McEachran
 *  
 * NME: haxelib run nme build "NME01.nmml" flash
 * Testing: haxelib run munit test test.hxml
 */

class Main 
{
	static private var _game:Game;

	public static function main() : Void
	{
		Lib.current.stage.align = StageAlign.TOP_LEFT;
		Lib.current.stage.scaleMode = StageScaleMode.NO_SCALE;
		
		var cols = 350;
		var rows = 200;
		var cellSize = 2;
		
		var renderer = new Render(Lib.current, cols, rows, cellSize);
		_game = new Game(renderer, cols, rows);
		
		Lib.current.stage.addEventListener(MouseEvent.CLICK, onClick);
	}
	
	static private function onClick(e:MouseEvent):Void 
	{
		_game.reset();
	}
	
}