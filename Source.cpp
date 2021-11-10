#include <iostream>
#include <cmath>
using namespace std;
double k(const double x, const double y);
int main()
{
	double p, q;

	cout << "p = "; cin >> p;
	cout << "q = "; cin >> q;

	double c = k(1 + p * q, q * q) + k(p, p * p) * k(p, p * p);
	cout << "c = " << c << endl;
	return 0;
}
double k(const double x, const double y)
{
	return (x / 1 + pow(sin(x), 2 * y) + y / abs(1 + y));
}