#include <iostream>
using namespace std;

int main()
{
	int n, m = 0;
	int temp, count = -1;
	
	cout << "Please inout digital: ";
	cin >> n;
	
	do
	{
		n = n+m;
		temp = n;
		m = 0;
		
		while(temp > 0)
		{
			m *= 10;
			m += temp%10;
			temp /= 10;
		}
		
		count++;
	}while(n != m);
	
	cout << count << " " << n << '\n';
	return 0;
}
