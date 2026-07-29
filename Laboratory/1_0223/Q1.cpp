#include<iostream>
using namespace std;

int main()
{
	int n;
	cout << "Please Enter an interger : ";
	cin >> n;
	if(n%2 == 0)
	{
		cout << n << " is even\n";
	}
	else
	{
		cout << n << " is odd\n";
	}
	return 0;
}
