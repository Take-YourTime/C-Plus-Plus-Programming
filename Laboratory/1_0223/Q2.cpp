#include<iostream>
using namespace std;

#define max 1001

bool prime[max];


int main()
{
	// calculate
	prime[0] = false;
	prime[1] = false;
	
	for(int i = 2; i < max; i++)
		prime[i] = true;
	
	for(int i = 2; i < max; i++)
	{
		if(prime[i] == true)
		{
			for(int j = i; j <= (max-1)/i; j++)
			{
				prime[i*j] = false;
			}
		}
	}
	
	
	// output
	int count = 0;
	
	for(int i = 3; i < max; i++)
	{
		if(prime[i] == true)
		{
			if(i <= 100)
			{
				cout << i << " is a prime number.\n";
			}
			count++;
		}
	}
	cout << "3-1000之質數數量為:" << count << "個\n";
	return 0;
}
