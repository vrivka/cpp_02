#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {
private:
	int RawBits;
	static int const FracionalBits;
public:
	int getRawBits( void ) const;
	void setRawBits( int const );
	Fixed();
	Fixed( Fixed & );
	~Fixed();
	Fixed &operator=( Fixed const & );
};

#endif
