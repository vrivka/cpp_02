#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
private:
	int RawBits;
	static int const FracionalBits;
public:
	int getRawBits() const;
	void setRawBits( int const );
	float toFloat() const;
	int toInt() const;
	Fixed();
	Fixed( int const );
	Fixed( float const );
	Fixed( Fixed const & );
	~Fixed();
	Fixed &operator=( Fixed const & );
};

std::ostream &operator<<( std::ostream &, Fixed const & );

#endif
