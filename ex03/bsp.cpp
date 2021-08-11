#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point) {
	float s1 = ((a.getX() - point.getX()) * (b.getY() - a.getY()) - (b.getX() - a.getX()) * (a.getY() - point.getY())).toFloat();
	float s2 = ((b.getX() - point.getX()) * (c.getY() - b.getY()) - (c.getX() - b.getX()) * (b.getY() - point.getY())).toFloat();
	float s3 = ((c.getX() - point.getX()) * (a.getY() - c.getY()) - (a.getX() - c.getX()) * (c.getY() - point.getY())).toFloat();

	if ((s1 <= 0 && s2 <= 0 && s3 <= 0) || (s1 >= 0 && s2 >= 0 && s3 >= 0))
		return true;
	else
		return false;
}
