#include <iostream>
#include <string>
#include <vector>
#include "../Tema3/Matrix.h"
#include "../Tema3/timer.h"



int main()
{
	// Create a matrix with the width of 20 and height of 10.
	Matrix matrix(20, 10);

	matrix.setLine(0, "X-----X----X-----XX-");
	matrix.setLine(1, "--X-----------------");
	matrix.setLine(2, "-----X--------------");
	matrix.setLine(3, "--------X-----------");
	matrix.setLine(4, "-----------X--------");
	matrix.setLine(5, "--------------X-----");
	matrix.setLine(6, "-----------------X--");
	matrix.setLine(7, "-------------------X");
	matrix.setLine(8, "------------------X-");
	matrix.setLine(9, "-----------------X--");
	
	matrix.print();
	// Would print
/*
X-----X----X-----XX-
--X-----------------
-----X--------------
--------X-----------
-----------X--------
--------------X-----
-----------------X--
-------------------X
------------------X-
-----------------X--
*/ 

	std::cout << "Next exercise" << std::endl;
	std::cout << "\n";
	matrix.setCellYX(1, 2, '-');
	matrix.print();
	// Would print
/*
X-----X----X-----XX-
--------------------
-----X--------------
--------X-----------
-----------X--------
--------------X-----
-----------------X--
-------------------X
------------------X-
-----------------X--
*/

	matrix.setCellYX(7, 3, 'O');
	matrix.print();
	/*
	X-----X----X-----XX-
	--------------------
	-----X--------------
	--------X-----------
	-----------X--------
	--------------X-----
	-----------------X--
	---O---------------X
	------------------X-
	-----------------X--
	*/

	// This should silently fail (not trigger an error): cell Y=11 invalid due to limited height.
	matrix.setCellYX(9, 3, 'O');

	timer_example t;
	t.sample();
	
	return 0;
}