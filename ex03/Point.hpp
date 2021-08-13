#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point {
private:
	Fixed const x;
	Fixed const y;
public:
	Fixed getX() const;
	Fixed getY() const;
	Point();
	Point( Point const & );
	Point( float const, float const );
	~Point();
	Point &operator=( Point const & );
};

std::ostream &operator<<( std::ostream &, Point const & );


#endif
