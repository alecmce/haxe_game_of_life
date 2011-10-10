package ;
import flash.display.Bitmap;
import flash.display.BitmapData;
import flash.display.MovieClip;
import flash.geom.Rectangle;

/**
 * ...
 * @author MikeC & Alec McEachran
 */

class Render 
{
	
	private var _cellSize : Int;
	private var _renderTarget : BitmapData;
	private var _rect:Rectangle;

	public function new(container:MovieClip, cols:Int, rows:Int, cellSize:Int) 
	{
		_cellSize = cellSize;
		_renderTarget = new BitmapData(cols * cellSize, rows * cellSize, false);
		container.addChild(new Bitmap(_renderTarget));
		
		_rect = new Rectangle(0, 0, _cellSize, _cellSize);
	}
	
	public inline function lock():Void
	{
		_renderTarget.lock();
		_renderTarget.fillRect(_renderTarget.rect, 0xff0000);
	}
	
	public inline function renderCell(x:Int, y:Int, isLive:Bool):Void
	{
		if (isLive)
		{
			_rect.x = x * _cellSize;
			_rect.y = y * _cellSize;
			_renderTarget.fillRect(_rect, 0);
		}
	}
	
	public inline function unlock():Void
	{
		_renderTarget.unlock();
	}
	
}