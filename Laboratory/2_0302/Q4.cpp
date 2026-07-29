#include<iostream>

using namespace std;

int main()
{
	char detect = 'N';
	do
	{
		int n, sum = 0;
		cout << "Please input a number: ";
		cin >> n;
		do
		{
			sum += n%10;
			n = n/10;
		}while(n>0);
		cout << "\tsum = " << sum <<'\n';
		cout << "Again?(y for yes) ";
		cin >> detect;
	}while(detect == 'y');
	return 0;
}

