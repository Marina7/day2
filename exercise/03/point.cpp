#include "point.h"

point::point(int x, int y) : x{x}, y{y} { }

bool point::operator==(const point& other)
{
	return (this->x == other.x) && (this->y == other.y);
}

bool point::operator!=(const point& other)
{
	return (this->x != other.x) || (this->y != other.y);
}
bool point::operator<(const point& other)
{
	return (this->x < other.x) || (this->x == other.x && this->y < other.y);
}