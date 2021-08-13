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
	static Fixed &min( Fixed &, Fixed & );
	static Fixed &max( Fixed &, Fixed & );
	static Fixed const &min( Fixed const &, Fixed const & );
	static Fixed const &max( Fixed const &, Fixed const & );
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
	Fixed &operator++();
	Fixed operator++( int );
	Fixed &operator--();
	Fixed operator--( int );
};

std::ostream &operator<<( std::ostream &, Fixed const & );

#endif
