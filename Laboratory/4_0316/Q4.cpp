#include <iostream>
using namespace std;

void calculate_area(int l, double pi, double &a)
{
	a = l*l*pi;
}

void calculate_area(int l, double &a)
{
	a = l*l;
}


void calculate_area(int l, int w, double &a)
{
	a = l*w;
}


int main()
{
	int length, width;
	double pi;
	double area = 0;
	
	cout << "Enter length(radius): ";
	cin >> length;
	cout << "Enter width: ";
	cin >> width; 
	cout << "Enter PI: ";
	cin >> pi;
	calculate_area(length, pi, area);
	cout << '\n' << "Circle area:" << area << '\n';
	calculate_area(length, area);
	cout << "Square area:" << area << '\n';
	calculate_area(length, width, area);
	cout << "Rectangle area:" << area << '\n';
	return 0;	
}
