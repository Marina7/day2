#include "array.h"
#include <stdexcept> // std::out_of_range

array::array() : array(0, 0) { }

array::array(int size, double value)
{
	if (size < 0) return;
	n = size;
	p = new double[n];
	for (int i = 0; i < n; ++i)
		p[i] = value;
}

int array::size()
{
	return n;
}

double array::at(int index) const 
{
	if (index < 0 || index > n)
		throw std::out_of_range("Index out of range.");

	return p[index];
}