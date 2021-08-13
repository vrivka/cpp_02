#include "Fixed.hpp"

int const Fixed::FracionalBits = 8;

Fixed::Fixed() : RawBits(0) {}

Fixed::Fixed( float const f ) {
	this->RawBits = (int)roundf(f * (1 << Fixed::FracionalBits));
}

Fixed::Fixed( int const i ) {
	this->RawBits = i << Fixed::FracionalBits;
}

Fixed::Fixed( Fixed const &other ) : RawBits(other.RawBits) {}

Fixed::~Fixed() {}

int Fixed::getRawBits() const {
	return RawBits;
}

void Fixed::setRawBits( int const raw ) {
	this->RawBits = raw;
}

int Fixed::toInt() const {
	return this->RawBits >> Fixed::FracionalBits;
}

float Fixed::toFloat() const {
	return (float)this->RawBits / (1 << Fixed::FracionalBits);
}

Fixed &Fixed::min( Fixed &a, Fixed &b ) {
	return a > b ? b : a;
}

Fixed &Fixed::max( Fixed &a, Fixed &b ) {
	return a < b ? b : a;
}

Fixed const &Fixed::min( Fixed const &a, Fixed const &b ) {
	return a > b ? b : a;
}

Fixed const &Fixed::max( Fixed const &a, Fixed const &b ) {
	return a < b ? b : a;
}

bool Fixed::operator>( Fixed const &other ) const {
	return this->RawBits > other.RawBits;
}

bool Fixed::operator<( Fixed const &other ) const {
	return this->RawBits < other.RawBits;
}

bool Fixed::operator>=( Fixed const &other ) const {
	return this->RawBits >= other.RawBits;
}

bool Fixed::operator<=( Fixed const &other ) const {
	return this->RawBits <= other.RawBits;
}

bool Fixed::operator==( Fixed const &other ) const {
	return this->RawBits == other.RawBits;
}

bool Fixed::operator!=( Fixed const &other ) const {
	return this->RawBits != other.RawBits;
}

Fixed &Fixed::operator=( Fixed const &other ) {
	this->RawBits = other.RawBits;
	return *this;
}

Fixed Fixed::operator+( Fixed const &other ) const {
	return Fixed( this->toFloat() + other.toFloat() );
}

Fixed Fixed::operator-( Fixed const &other ) const {
	return Fixed( this->toFloat() - other.toFloat() );
}

Fixed Fixed::operator*( Fixed const &other ) const {
	return Fixed( this->toFloat() * other.toFloat() );
}

Fixed Fixed::operator/( Fixed const &other ) const {
	return Fixed( this->toFloat() / other.toFloat() );
}

Fixed &Fixed::operator++() {
	this->RawBits++;
	return *this;
}

Fixed Fixed::operator++( int ) {
	Fixed const copy( this->toFloat() );
	++(*this);
	return copy;
}

Fixed &Fixed::operator--() {
	this->RawBits--;
	return *this;
}

Fixed Fixed::operator--( int ) {
	Fixed copy( this->toFloat() );
	--(*this);
	return copy;
}

std::ostream &operator<<( std::ostream &o, Fixed const &fixed ) {
	o << fixed.toFloat();
	return o;
}

