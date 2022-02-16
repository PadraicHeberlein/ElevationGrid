#include "constants.hpp"
#include "vector.hpp"
#include <cmath>
#include <ostream>

using namespace std;
vector vector::operator*(const double scalar) const
{
	vector scaled = vector();	

	for(int i = 0; i < DIMENSION; i++)
	{
		double value = scalar*get(i);
		scaled.set(i, value);
	}

	return scaled;
}

double vector::dot(vector& other)
{
	double xPart = getX() * other.getX();
	double yPart = getY() * other.getY();
	double zPart = getZ() * other.getZ();

	return xPart + yPart + zPart;
}

vector vector::x(vector& other)
{
	double xPart = (getY() * other.getZ()) - (getZ() * other.getY());
	double yPart = (getX() * other.getZ()) - (getZ() * other.getX());
	double zPart = (getX() * other.getY()) - (getY() * other.getX());

	return vector(xPart, yPart, zPart);
}

