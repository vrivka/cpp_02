#include <iostream>
#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point);

int main() {
	{
		Point a(3, 5);
		Point b(5, 10);
		Point c(10, 6);
		Point point(4, 7.5);

		if (bsp(a, b, c, point))
			std::cout << "Point p" << point << " is inside a triangle with vertices at point "
											  "a = " << a << ", b = " << b << ", c = " << c << std::endl;
		else
			std::cout << "Point p" << point << " is outside a triangle with vertices at point "
											  "a = " << a << ", b = " << b << ", c = " << c << std::endl;
	}
	{
		Point a(4.12, 6.16);
		Point b(6.55, 1.5);
		Point c(1.23, 1.57);
		Point point(2.88, 4.02);

		if (bsp(a, b, c, point))
			std::cout << "Point p" << point << " is inside a triangle with vertices at point "
											  "a = " << a << ", b = " << b << ", c = " << c << std::endl;
		else
			std::cout << "Point p" << point << " is outside a triangle with vertices at point "
											  "a = " << a << ", b = " << b << ", c = " << c << std::endl;
	}
	{
		Point a(0, 0);
		Point b(0, 5);
		Point c(5, 0);
		Point point(2.5, 2.5);

		if (bsp(a, b, c, point))
			std::cout << "Point p" << point << " is inside a triangle with vertices at point "
											  "a = " << a << ", b = " << b << ", c = " << c << std::endl;
		else
			std::cout << "Point p" << point << " is outside a triangle with vertices at point "
											  "a = " << a << ", b = " << b << ", c = " << c << std::endl;
	}
}


