#include "stdafx.h"
#include "color.h"
#include <algorithm>
#include <windows.h> // RGB


color::color(double red, double green, double blue) :
	red(get_valid_number(red)),
	green(get_valid_number(green)),
	blue(get_valid_number(blue)) { }

double color::get_valid_number(double value) const
{
	return std::clamp(value, 0., 1.);
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
	return RGB(red * 255, green * 255, blue * 255);
}

double color::get_luminance() const
{
	return (0.2126 * red + 0.7152 * green + 0.0722 * blue);
}

bool operator==(const color& c1, const color& c2)
{
	return c1.get_color_ref() == c2.get_color_ref();
}