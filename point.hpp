#ifndef POINT_HPP
#define POINT_HPP

#include "constants.hpp"
#include <ostream>

using namespace std;

class point
{
private:
	double* p;
public:
	// default constructor
	point()
	{
		p = new double[DIMENSION];	

		setX(0.0);
		setY(0.0);
		setZ(0.0);
	}
	// coordinate constructor
	point(double x, double y, double z);
	// copy & move constructors
	point(const point& otherPoint);
	point(point&& otherPoint);
	// destructor
	~point();	
	// get methods
	double getX() const { return p[X];}
	double getY() const { return p[Y];}
	double getZ() const { return p[Z];}
	double get(int coordinate) const { return p[coordinate];}
	// set methods
	void setX(double x) { p[X] = x;}
	void setY(double y) { p[Y] = y;}
	void setZ(double z) { p[Z] = z;}
	void set(int coordinate, double value) { p[coordinate] = value;}
	void set(double x, double y, double z)
	{
		setX(x);
		setY(y);
		setZ(z);
	}
	// overload copy assignment operator
	point& operator=(const point& otherPoint);
	// overload move assignment operator
	point& operator=(point&& otherPoint);
	// overload of comaprison operators
	bool operator==(const point& rightHandSide) const;
	bool operator!=(const point& rightHandSide) const
	{
		return !(*this == rightHandSide);
	}
	// overload of negation operator
	point operator-() const;
	// overload of arithmetic operators
	point operator+(const point& addend) const;
	point operator-(const point& subtrahend) const;
	point operator*(const point& mulitplicand) const;
	// overload output stream operator
	friend ostream& operator<<(ostream& os, const point&p);
};

#endif
