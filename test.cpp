#include "point.hpp"
#include "vector.hpp"
#include <iostream>

using namespace std;

int main()
{
	cout << "---------------------" << endl;
	cout << "| POINT CLASS       |" << endl;
	cout << "---------------------" << endl;	

	cout << "Default constructor:" << endl;
	cout << " point p = point();" << endl; 

	point p = point();
	
	cout << "   p.X = " << p.getX() << endl;
	cout << "   p.Y = " << p.getY() << endl;
	cout << "   p.Z = " << p.getZ() << endl;

	cout << "Set(double x, double y, double z) method:" << endl;
	cout << " p.set(1.2, 3.3, 4.5);" << endl;

	p.set(1.2, 3.3, 4.5);
	
	cout << "   p.X = " << p.getX() << endl;
	cout << "   p.Y = " << p.getY() << endl;
	cout << "   p.Z = " << p.getZ() << endl;

	cout << "Coordinate constructor:" << endl;
	cout << " q(1.0, 2.0, 3.0);" << endl;

	point q(1.0, 2.0, 3.0);
	
	cout << "   q.X = " << q.getX() << endl;
	cout << "   q.Y = " << q.getY() << endl;
	cout << "   q.Z = " << q.getZ() << endl;

	cout << "Copy constructor:" << endl;
	cout << " point r(q);" << endl;	

	point r(q);

	cout << "   r.X = " << r.getX() << endl;
	cout << "   r.Y = " << r.getY() << endl;
	cout << "   r.Z = " << r.getZ() << endl;

	cout << "Negation operator:" << endl;
	cout << " point z(-q);" << endl;

	point z(-q);

	cout << "   z.X = " << z.getX() << endl;
	cout << "   z.Y = " << z.getY() << endl;
	cout << "   z.Z = " << z.getZ() << endl;

	cout << "Addition operator:" << endl;
	cout << " point y = z + z;" << endl; 

	point y = z + z;	

	cout << "   y.X = " << y.getX() << endl;	
	cout << "   y.Y = " << y.getY() << endl;
	cout << "   y.Z = " << y.getZ() << endl;

	cout << "Subtraction operator:" << endl;
	cout << " point x = y - z;" << endl;

	point x = y - z;

	cout << "   x.X = " << x.getX() << endl;
	cout << "   x.Y = " << x.getY() << endl;	
	cout << "   x.Z = " << x.getZ() << endl;	

	cout << "Multiplication operator:" << endl;
	cout << " point w = x * x;" << endl;

	point w = x * x;

	cout << "   w.X = " << w.getX() << endl;
	cout << "   w.Y = " << w.getY() << endl;
	cout << "   w.Z = " << w.getZ() << endl;
	
	cout << "Output stream operator:" << endl;
	cout << " w = ";
	cout << w << endl;

	cout << "---------------------" << endl;
	cout << "| VECTOR CLASS      |" << endl;
	cout << "---------------------" << endl;

	cout << "INHERITED METHODS:" << endl;
	cout << "---------------------" << endl;

	cout << "Default constructor:" << endl;
	cout << " vector v = vector();" << endl;

	vector v = vector();	

	cout << "   v = " << v << endl; 

	cout << "Set(double x, double y, double z) method:" << endl;
	cout << " v.set(2.4, -1.9, 5.7);" << endl;

	v.set(2.4, -1.9, 5.7);

	cout << "   v = " << v << endl; 

	cout << "Testing get methods..." << endl;

	cout << " v.getX() = " << v.getX() << endl;
	cout << " v.getY() = " << v.getY() << endl;
	cout << " v.getZ() = " << v.getZ() << endl;

	cout << "---------------------" << endl;
	cout << "VECTOR CLASS METHODS:" << endl;
	cout << "---------------------" << endl;
	
	cout << "Scalar multiplication:" << endl;
	cout << " v*2.0 = " << v*2.0 << endl;

	cout << "Dot product:" << endl;
	cout << " v.dot(v) = " << v.dot(v) << endl;

	cout << "Cross product:" << endl;
	cout << " v.x(v) = " << v.x(v) << endl;
 
	return 0;
}
