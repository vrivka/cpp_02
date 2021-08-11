#include "Fixed.hpp"

int const Fixed::FracionalBits = 8;

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

int Fixed::getRawBits() const {
	std::cout << "getRawBits member function called\n";
	return RawBits;
}

void Fixed::setRawBits(const int raw) {
	std::cout << "setRawBits member function called\n";
	this->RawBits = raw;
}

Fixed &Fixed::operator=( Fixed const & other ) {
	std::cout << "Assignation operator called\n";
	this->RawBits = other.getRawBits();
	return *this;
}
