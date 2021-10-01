#include "Fixed.hpp"

int const Fixed::FracionalBits = 8;

int Fixed::toInt() const {
	return (this->RawBits >> Fixed::FracionalBits);
}

float Fixed::toFloat() const {
	return ((float)this->RawBits / (1 << Fixed::FracionalBits));
}

int Fixed::getRawBits() const {
	std::cout << "getRawBits member function called\n";
	return RawBits;
}

void Fixed::setRawBits( int const raw ) {
	std::cout << "setRawBits member function called\n";
	this->RawBits = raw;
}

Fixed::Fixed() : RawBits(0) {
	std::cout << "Default constructor called\n";
}

Fixed::Fixed( float const f ) {
	std::cout << "Float constructor called\n";
	this->RawBits = (int)roundf(f * (1 << Fixed::FracionalBits));
}

Fixed::Fixed( int const i ) {
	std::cout << "Int constructor called\n";
	this->RawBits = i << Fixed::FracionalBits;
}

Fixed::Fixed( Fixed const &other ) {
	std::cout << "Copy constructor called\n";
	*this = other;
}

Fixed::~Fixed() {
	std::cout << "Destructor called\n";
}

Fixed &Fixed::operator=( Fixed const &other ) {
	std::cout << "Assignation operator called\n";
	this->RawBits = other.RawBits;
	return *this;
}

std::ostream &operator<<( std::ostream &o, Fixed const &fixed ) {
	o << fixed.toFloat();
	return o;
}

