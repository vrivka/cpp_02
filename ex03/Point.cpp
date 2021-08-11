#include "Point.hpp"

Point::Point() : x(0), y(0), x_copy(x), y_copy(y) {}

Point::Point( Point const &other ) {
	*this = other;
}

Point::Point( const float x, const float y ) : x(x), y(y), x_copy(x), y_copy(y) {}

Point::~Point() {}

Fixed Point::getX() const {
	return x_copy;
}

Fixed Point::getY() const {
	return y_copy;
}

Point &Point::operator=( Point const &other ) {
	this->x_copy = other.x_copy;
	this->y_copy = other.y_copy;
	return *this;
}
