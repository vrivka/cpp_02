#include "Fixed.hpp"

int const Fixed::FracionalBits = 8;

int Fixed::getRawBits() const {
	std::cout << "getRawBits member function called\n";
	return this->RawBits;
}

void Fixed::setRawBits( int const raw ) {
	std::cout << "setRawBits member function called\n";
	this->RawBits = raw;
}

Fixed::Fixed() : RawBits(0) {
	std::cout << "Default constructor called\n";
}

Fixed::Fixed( Fixed &other ) {
	std::cout << "Copy constructor called\n";
	*this = other;
}

Fixed::~Fixed() {
	std::cout << "Destructor called\n";
}

Fixed &Fixed::operator=( Fixed const &other ) {
	std::cout << "Assignation operator called\n";
	this->RawBits = other.getRawBits();
	return *this;
}
