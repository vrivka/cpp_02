#include <iostream>
#include "Fixed.hpp"

int main() {
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << "default a " << a << std::endl;
	std::cout << "Pre-increment a " << ++a << std::endl;
	std::cout << "default a " << a << std::endl;
	std::cout << "Post-increment a " << a++ << std::endl;
	std::cout << "default a " << a << std::endl;
	std::cout << "default b " << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	return 0;
}


