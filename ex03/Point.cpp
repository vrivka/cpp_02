#include "Point.hpp"

Point::Point() : x(0), y(0) {}

Point::Point( Point const &other ) : x(other.x), y(other.y) {}

Point::Point( float const x, float const y ) : x(x), y(y) {}

Point::~Point() {}

Fixed Point::getX() const {
	return x;
}

Fixed Point::getY() const {
	return y;
}

Point &Point::operator=( Point const & ) {
	return *this;
}

std::ostream &operator<<( std::ostream &o, Point const &p) {
	o << "(" << p.getX() << "; " << p.getY() << ")";
	return o;
}
