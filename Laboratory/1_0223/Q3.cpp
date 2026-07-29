#include<iostream>
using namespace std;

int main()
{
	int a, b, c;
	int A, B, C;
	
	cout << "Enter three intrgers : \n";
	cin >> a >> b >> c;
	
	A = a;
	B = b;
	C = c;
	
	// let c be the largest side
	
	if(a>b)
		swap(a, b);
	
	if(b>c)
		swap(b, c);
		
	if(a>b)
		swap(a, b);
		
	
	if((a + b) > c)
	{	
		cout << A << B << C << " can be a triangle.\n";
		
		if((a*a + b*b) > c*c)
			cout << A << B << C << " form an Acute triangle.\n";
		
		else if((a*a + b*b) == c*c)
			cout << A << B << C << " form an Right triangle.\n";
			
		else if((a*a + b*b) < c*c)
			cout << A << B << C << " form an Obtuse triangle.\n";
	}
	else
	{
		cout << "They can not form a treangle.\n";
	}
	
	return 0;
}
