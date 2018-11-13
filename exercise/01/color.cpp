#include "stdafx.h"
#include "color.h"
#include <windows.h> // RGB


color::color() : color(0, 0, 0) { }

color::color(double red, double green, double blue) :
	red(get_valid_number(red)),
	green(get_valid_number(green)),
	blue(get_valid_number(blue)) { }

color::color(const color& other) :
	color(other.red, other.green, other.blue) { }

double color::get_valid_number(double value) const
{
	if (value < low_value) return low_value;
	if (value > high_scaled_value) return high_scaled_value;
	return value;
}

double color::get_red() const
{
	return red;
}

double color::get_green() const
{
	return green;
}

double color::get_blue() const
{
	return blue;
}

void color::set_red(double red)
{
	this->red = get_valid_number(red);
}

void color::set_green(double green)
{
	this->green = get_valid_number(green);
}

void color::set_blue(double blue)
{
	this->blue = get_valid_number(blue);
}


unsigned long color::get_color_ref() const
{
	return RGB(red * high_rgb_value, green * high_rgb_value, blue * high_rgb_value);
}

double color::get_luminance() const
{
	return (rY * red + gY * green + bY * blue);
}