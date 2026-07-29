#include <iostream>
using namespace std;

double plu(double a, double b)
{
	return a+b;
}

double minu(double a, double b)
{
	return a-b;
}

double cross(double a, double b)
{
	return a*b;
}

int main()
{
	double a, b;
	cout << "Input two numbers: ";
	cin >> a >> b;
	cout << "plus: " << plu(a, b) << '\n';
	cout << "minus: " << minu(a, b) << '\n';
	cout << "cross: " << cross(a, b) << '\n';
	return 0;
}
