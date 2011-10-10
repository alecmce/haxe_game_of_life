import massive.munit.TestSuite;

import GridTest;
import RulesTest;

/**
 * Auto generated Test Suite for MassiveUnit.
 * Refer to munit command line tool for more information (haxelib run munit)
 */

class TestSuite extends massive.munit.TestSuite
{		

	public function new()
	{
		super();

		add(GridTest);
		add(RulesTest);
	}
}
