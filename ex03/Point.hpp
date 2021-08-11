#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point {
private:
	Fixed const x;
	Fixed const y;
	Fixed x_copy;
	Fixed y_copy;
public:
	Fixed getX() const;
	Fixed getY() const;
	Point();
	Point( Point const & );
	Point( float const, float const );
	~Point();
	Point &operator=( Point const & );
};

#endif
