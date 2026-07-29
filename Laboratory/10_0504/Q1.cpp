#include <iostream>
using namespace std;

int main()
{
	int i1 = 8, i2 = 10, i3 = 12;
	int* p1 = &i1, * p2 = &i2, * p3 = &i3;
	
	cout << "Value of *p1 is : " << *p1 << '\t' << ", address p1 at : " << p1 << '\n';
	cout << "Value of *p2 is : " << *p2 << '\t' << ", address p2 at : " << p2 << '\n';
	cout << "Value of *p3 is : " << *p3 << '\t' << ", address p3 at : " << p3 << '\n';
	
	cout << "When we let i1 = i2 ......\n";
	i1 = i2;
	
	cout << "Value of *p1 is : " << *p1 << '\t' << ", address p1 at : " << p1 << '\n';
	cout << "Value of *p2 is : " << *p2 << '\t' << ", address p2 at : " << p2 << '\n';
	cout << "Value of *p3 is : " << *p3 << '\t' << ", address p3 at : " << p3 << '\n';
	
	cout << "When we let p1 = p3 ......\n";
	p1 = p3;
	
	cout << "Value of *p1 is : " << *p1 << '\t' << ", address p1 at : " << p1 << '\n';
	cout << "Value of *p2 is : " << *p2 << '\t' << ", address p2 at : " << p2 << '\n';
	cout << "Value of *p3 is : " << *p3 << '\t' << ", address p3 at : " << p3 << '\n';
	
	cout << "When we let *p3 = *p2 ......\n";
	*p3 = *p2;
	
	cout << "Value of *p1 is : " << *p1 << '\t' << ", address p1 at : " << p1 << '\n';
	cout << "Value of *p2 is : " << *p2 << '\t' << ", address p2 at : " << p2 << '\n';
	cout << "Value of *p3 is : " << *p3 << '\t' << ", address p3 at : " << p3 << '\n';
	
	
	cout << "When we let p2= p1 ......\n";
	p2 = p1;
	
	cout << "Value of *p1 is : " << *p1 << '\t' << ", address p1 at : " << p1 << '\n';
	cout << "Value of *p2 is : " << *p2 << '\t' << ", address p2 at : " << p2 << '\n';
	cout << "Value of *p3 is : " << *p3 << '\t' << ", address p3 at : " << p3 << '\n';
	return 0;
}
