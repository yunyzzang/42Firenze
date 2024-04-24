#include "Point.hpp"

Point::Point() : x_(0), y_(0) {
}

Point::Point(const float x, const float y) : x_(x), y_(y) {
}

Point::Point(const Fixed x, const Fixed y) : x_(x), y_(y) {
}

Point::Point(const Point &copy) : x_(copy.x_), y_(copy.y_) {
}

Point& Point::operator=(const Point &copy) {
	const_cast<Fixed&>(x_) = copy.x_;
	const_cast<Fixed&>(x_) = copy.y_;
	return (*this);
}

Point::~Point(){
}

const Fixed& Point::getX(void) const {
	return x_;
}

const Fixed& Point::getY(void) const {
	return y_;
}

Fixed getArea(Point const a, Point const b, Point const c) {
	Fixed s = (a.getX() * b.getY() + b.getX() * c.getY() + c.getX() * a.getY()) 
		- (a.getY() * b.getX() + b.getY() * c.getX() + c.getY() * a.getX());
	return (std::abs(s.getRawBits()));

}

bool bsp(Point const a, Point const b, Point const c, Point const point) {
	if (getArea(a, b, c) == getArea(a, b, point) + getArea(a, point, c) + getArea(point, b, c))
		return true;
	else
		return false;
}