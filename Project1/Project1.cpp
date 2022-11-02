// Lab 5_1
#include <iostream>
#include <cmath>
using namespace std;
double k(const double x, const double y);

int main()
{
	double p, q;

	cout << "p = "; cin >> p;
	cout << "q = "; cin >> q;
	double c = pow(k((p+sqrt(q)),q-sqrt(p)), 2)-k(1,p+q);
	cout << "c = " << c << endl;
	return 0;
}

double k(const double x, const double y)
{
	return (x/(abs(pow(x,3)+pow(y,3))))+(y/(abs(x+y)));
}