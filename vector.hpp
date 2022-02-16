#ifndef VECTOR_HPP
#define VECTOR_HPP

#include "constants.hpp"
#include "point.hpp"
#include <ostream>

using namespace std;

class vector : public point
{
private:
	double norm;
public:
	vector() : point() {}
	vector(double xp, double yp, double zp) : point(xp, yp, zp) {}
	vector operator*(const double scalar) const;	// scalar multiplication
	double dot(vector& other);						// dot product
	vector x(vector& other);						// cross product
	//double norm()									// magnitude of the vector
};

#endif
