package ;

/**
 * ...
 * @author MikeC & Alec McEachran
 */

class Rules
{

	public function new() 
	{
	}
	
	inline public function apply(isCellAlive:Bool, liveNeighbors:Int):Bool 
	{
		return liveNeighbors == 3 || (liveNeighbors == 2 && isCellAlive);
	}
}