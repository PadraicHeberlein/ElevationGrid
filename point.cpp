#include "constants.hpp"
#include "point.hpp"
#include <cmath>
#include <ostream>

using namespace std;
// coordinate constructor
point::point(double x, double y, double z) 
{	
	p = new double[DIMENSION];
		
	setX(x);
	setY(y);
	setZ(z);
}
// copy constructor
point::point(const point& otherPoint)
{
	p = new double[DIMENSION];

	for(int i = 0; i < DIMENSION; i++)
	{
		double value = otherPoint.get(i);
		set(i, value);		 
	}
}
// move constructor
point::point(point&& otherPoint)
{
	p = new double[DIMENSION];

	for(int i = 0; i < DIMENSION; i++)
	{
		double value = otherPoint.get(i);
		set(i, value);
	} 

	otherPoint.~point();
}
// destructor
point::~point() { delete[] p;}
// overload copy assignment operator
point& point::operator=(const point& otherPoint)
{
	if(this != &otherPoint)
	{
		delete[] p;
		p = new double[DIMENSION];

		for(int i = 0; i < DIMENSION; i++)
		{
			double value = otherPoint.get(i);
			set(i, value);
		}
	}

	return *this;
}
// overload move assignment operator
point& point::operator=(point&& otherPoint)
{
	if(this != &otherPoint)
	{
		delete[] p;
		p = new double[DIMENSION];

		for(int i = 0; i < DIMENSION; i++)
		{
			double value = otherPoint.get(i);
			set(i, value);
		}
	}
	otherPoint.~point();

	return *this;
} 
// overload equality comparitor
bool point::operator==(const point& rightHandSide) const
{
	bool xEQ = abs(getX() - rightHandSide.getX()) < ZERO;
	bool yEQ = abs(getY() - rightHandSide.getY()) < ZERO;
	bool zEQ = abs(getZ() - rightHandSide.getZ()) < ZERO;

	return xEQ && yEQ && zEQ;  
}
// overload negation operator
point point::operator-() const
{
	point neg = point();

	for(int i = 0; i < DIMENSION; i++)
	{
		double value = -1*get(i);
		neg.set(i, value);
	}

	return neg;
}
// overload arithmetic operators
point point::operator+(const point& addend) const
{
	point sum = point();
	
	for(int i = 0; i < DIMENSION; i++)
	{
		double value = get(i) + addend.get(i);
		sum.set(i, value);
	}
	
	return sum;
}

point point::operator-(const point& subtrahend) const
{
	return this->operator+(-subtrahend);
}

point point::operator*(const point& multiplicand) const
{
	point product = point();
	
	for(int i = 0; i < DIMENSION; i++)
	{
		double value = get(i) * multiplicand.get(i);
		product.set(i, value);
	}
	
	return product;
}

ostream& operator<<(ostream& os, const point& p)
{
	return os << "(" << p.getX() << ", " << p.getY() << ", " << p.getZ() << ")";
}
