#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
private:
	int RawBits;
	static const int FracionalBits;
public:
	int getRawBits( void ) const;
	void setRawBits( int const raw );
	float toFloat( void ) const;
	int toInt(void) const;
	Fixed();
	Fixed( int const );
	Fixed( float const );
	Fixed( Fixed const & );
	~Fixed();
	Fixed &operator=( Fixed const & );
};

std::ostream &operator<<( std::ostream & o, Fixed const & fixed);

#endif
