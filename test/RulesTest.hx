package ;
import massive.munit.Assert;

/**
 * ...
 * @author MikeC & Alec McEachran
 */

class RulesTest 
{
	public var rules:Rules;

	@Before
	public function before():Void 
	{
		rules = new Rules();
	}
	
	@After
	public function after():Void
	{
		rules = null;
	}
	
	@Test
	public function aLiveCellWithThreeNeighborsRemainsLive():Void
	{
		var isCellAlive = true;
		var liveNeighbors = 3;
		var willCellBeAlive = rules.apply(isCellAlive, liveNeighbors);
		
		Assert.isTrue(willCellBeAlive);
	}
	
	@Test
	public function aDeadCellWithThreeNeighborsBecomesAlive():Void
	{
		var isCellAlive = false;
		var liveNeighbors = 3;
		var willCellBeAlive = rules.apply(isCellAlive, liveNeighbors);
		
		Assert.isTrue(willCellBeAlive);
	}
	
	@Test
	public function aDeadCellWithTwoNeighborsStaysDead():Void
	{
		var isCellAlive = false;
		var liveNeighbors = 2;
		var willCellBeAlive = rules.apply(isCellAlive, liveNeighbors);
		
		Assert.isFalse(willCellBeAlive);
	}
	
	@Test
	public function aLiveCellWithTwoNeighborsStaysAlive():Void
	{
		var isCellAlive = true;
		var liveNeighbors = 2;
		var willCellBeAlive = rules.apply(isCellAlive, liveNeighbors);
		
		Assert.isTrue(willCellBeAlive);
	}
	
	@Test
	public function aLiveCellWithNNeighborsWhereNIsntTwoOrThreeDies():Void
	{
		var isCellAlive = true;
		var foundLivingCell = false;
		
		var neighbors = [0, 1, 4, 5, 6, 7, 8];
		for (i in neighbors)
		{
			foundLivingCell = foundLivingCell || rules.apply(isCellAlive, i);
		}
		
		Assert.isFalse(foundLivingCell);
	}
	
	@Test
	public function aDeadCellWithNNeighborsWhereNIsntTwoOrStaysDead():Void
	{
		var isCellAlive = false;
		var foundLivingCell = false;
		
		var neighbors = [0, 1, 4, 5, 6, 7, 8];
		for (i in neighbors)
		{
			foundLivingCell = foundLivingCell || rules.apply(isCellAlive, i);
		}
		
		Assert.isFalse(foundLivingCell);
	}
	
}