#include "array.h"
#include <stdexcept> // std::out_of_range

array::array(int size, double value)
{
	if (size < 0) return;
	n = size;
	p = new double[n];
	for (int i = 0; i < n; ++i)
		p[i] = value;
}

array::array(const array& other) : n(other.n), p(new double[other.n])
{
	std::copy(other.p, other.p + other.n, p);
}

array::~array()
{
	if (!p)
		return;
	delete[] p;
}

array& array::operator=(const array & other)
{
	n = other.n;
	if (p)
		delete[] p;
	p = new double[n];
	std::copy(other.p, other.p + n, p);
	return *this;
}

array::array(array&& other) noexcept :
	n(std::exchange(other.n, 0)), 
	p(std::exchange(other.p, nullptr)) { }

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