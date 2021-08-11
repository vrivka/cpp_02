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
	static Fixed &min( Fixed &, Fixed & );
	static Fixed &max( Fixed &, Fixed &);
	static Fixed const min( Fixed const, Fixed const  );
	static Fixed  const max( Fixed const , Fixed const );
	Fixed();
	Fixed( int const );
	Fixed( float const );
	Fixed( Fixed const & );
	~Fixed();
	bool operator>( Fixed const & ) const;
	bool operator<( Fixed const & ) const;
	bool operator>=( Fixed const & ) const;
	bool operator<=( Fixed const & ) const;
	bool operator==( Fixed const & ) const;
	bool operator!=( Fixed const & ) const;
	Fixed &operator=( Fixed const & );
	Fixed operator+( Fixed const & ) const;
	Fixed operator-( Fixed const & ) const;
	Fixed operator*( Fixed const & ) const;
	Fixed operator/( Fixed const & ) const;
	Fixed &operator++( void );
	Fixed operator++( int );
	Fixed &operator--( void );
	Fixed operator--( int );
};

std::ostream &operator<<( std::ostream & o, Fixed const & fixed);

#endif
