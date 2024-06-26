#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"
#include <iostream>

class Point {
private:
	const Fixed x_;
	const Fixed y_;

public:
	Point();
	Point(const Fixed x, const Fixed y);
	Point(const float x, const float y);
	Point(const Point &copy);
	Point& operator=(const Point &copy);
	~Point();

	const Fixed& getX(void) const;
	const Fixed& getY(void) const;
};

bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif
