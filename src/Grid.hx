package;

/**
 * ...
 * @author MikeC & Alec McEachran
 */

class Grid 
{
	private var _columns:Int;
	private var _rows:Int;
	private var _bitshift:Int;
	private var _grid:Array<Int>;

	public function new(columns, rows) 
	{
		_columns = columns;
		_rows = rows;
		
		_bitshift = Math.ceil(Math.log(_columns) / Math.log(2));
		_grid = new Array<Int>();
		
		for (x in 0..._columns)
		{
			for (y in 0..._rows)
			{
				_grid[getCellReference(x, y)] = 0;
			}
		}
	}
	
	inline public function get(x:Int, y:Int):Bool
	{
		return getCellValue(x, y) == 1;
	}
	
	inline public function set(x:Int, y:Int, value:Bool):Void
	{
		_grid[getCellReference(x, y)] =  value ? 1 : 0;
	}
	
	public function getLiveNeighbors(x:Int, y:Int):Int 
	{
		var left = x - 1 < 0 ? 0 : x - 1;
		var right = x + 2 > _columns ? _columns : x + 2;
		var top = y - 1 < 0 ? 0 : y - 1;
		var bottom = y + 2 > _rows ? _rows : y + 2;
		
		var count = 0;
		for (i in left...right)
		{
			for (j in top...bottom)
			{
				count += getCellValue(i, j);
			}
		}
		
		count -= getCellValue(x, y);
		return count;
	}
	
	inline private function getCellValue(x:Int, y:Int) : Int
	{
		return _grid[getCellReference(x, y)];
	}
	
	inline private function getCellReference(x:Int, y:Int) : Int
	{
		return y << _bitshift | x;
	}
	
	
}