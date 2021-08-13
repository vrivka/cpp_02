#include <iostream>
#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point);

int main( void ) {
	Point a( 3, 5 );
	Point b( 5, 10 );
	Point c( 10, 6 );
	Point point( 4 , 7.5 );

	if (bsp( a, b, c, point))
		std::cout << "Point " << point << " is inside a triangle with vertices at point "
		"a = " << a << ", b = " << b << ", c = " << c << std::endl;
	else
		std::cout << "Point " << point << " is outside a triangle with vertices at point "
		"a = " << a << ", b = " << b << ", c = " << c << std::endl;
}


