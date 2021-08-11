#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {
private:
	int RawBits;
	static const int FracionalBits;
public:
	int getRawBits( void ) const;
	void setRawBits( int const raw );
	Fixed();
	Fixed( Fixed & );
	~Fixed();
	Fixed &operator=( Fixed const & );
};

#endif
