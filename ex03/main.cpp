#include <iostream>
#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point);

int main( void ) {
	std::cout << bsp( Point( 2, 4 ), Point( 3, 1 ), Point( 6, 3 ), Point( -4, 2 )) << std::endl;
}


