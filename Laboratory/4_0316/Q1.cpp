#include <iostream>
using namespace std;

void swap_value(int n1, int n2)
{
	int temp = n1;
	n1 = n2;
	n2 = temp;
	cout << "In swap_value function : "<< n1 << " " << n2 << '\n';
}

void swap_ref(int &n1, int &n2)
{
	int temp = n1;
	n1 = n2;
	n2 = temp;
	cout << "In swap_ref function : "<< n1 << " " << n2 << '\n';
}

int main()
{
	int a, b;
	cout << "Enter two value:\n";
	cin >> a >> b;
	cout << "Your initial numbers : "<< a << " " << b << '\n' << '\n';
	
	swap_value(a, b);
	cout << "In main function(after swap_value) : "<< a << " " << b << '\n' << '\n';
	
	
	swap_ref(a, b);
	cout << "In main function(after swap_ref) : "<< a << " " << b << '\n';
	
	return 0;	
}
