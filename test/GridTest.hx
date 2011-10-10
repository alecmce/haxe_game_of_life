package ;
import massive.munit.Assert;
import Grid;

/**
 * ...
 * @author MikeC & Alec McEachran
 */

class GridTest 
{
	public var grid : Grid;
	
	@Before
	public function before():Void 
	{
		grid = new Grid(3, 3);
	}
	
	@After
	public function after():Void
	{
		grid = null;
	}
	
	@Test
	public function initiallyThereAreNoLiveNeighbors():Void
	{
		var liveNeighbors = grid.getLiveNeighbors(1, 1);
		Assert.isTrue(liveNeighbors == 0);
	}
	
	@Test
	public function liveNeighborCountIsAccurate():Void
	{
		grid.set(0, 0, true);
		grid.set(1, 0, true);
		grid.set(2, 1, true);
		
		var liveNeighbors = grid.getLiveNeighbors(1, 1);
		Assert.isTrue(liveNeighbors == 3);
	}
	
}