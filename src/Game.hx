package ;
import flash.display.Bitmap;
import flash.display.BitmapData;
import flash.display.MovieClip;
import flash.geom.Rectangle;
import haxe.Timer;

/**
 * ...
 * @author MikeC & Alec McEachran
 */

class Game 
{
	private var _columns:Int;
	private var _rows:Int;
	private var _current:Grid;
	private var _future:Grid;
	private var _rules:Rules;
	private var _timer:Timer;
	private var _renderer:Render;
	
	public function new(renderer:Render, cols:Int, rows:Int) 
	{
		_columns = cols;
		_rows = rows;
		
		_current = new Grid(_columns, _rows);
		_future = new Grid(_columns, _rows);
		
		_rules = new Rules();
		
		_timer = new Timer(15);
		_timer.run = iterate;
		
		_renderer = renderer;
		
		reset();
	}
	
	public function reset():Void 
	{
		for (x in 0..._columns)
		{
			for (y in 0..._rows)
			{
				_current.set(x, y, Math.random() < .5);
			}
		}
	}
	
	private function iterate():Void
	{
		_renderer.lock();
		
		for (x in 0..._columns)
		{
			for (y in 0..._rows)
			{
				var isLive = _current.get(x, y);
				var liveNeighbors = _current.getLiveNeighbors(x, y);
				var futureLive = _rules.apply(isLive, liveNeighbors);
				
				_future.set(x, y, futureLive);
				_renderer.renderCell(x, y, futureLive);
			}
		}
		
		var tmp = _current;
		_current = _future;
		_future = tmp;
		
		_renderer.unlock();
	}
	
}