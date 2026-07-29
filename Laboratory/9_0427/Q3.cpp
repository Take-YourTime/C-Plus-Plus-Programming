#include <iostream>
#include <cstdlib>
#include <string>
#include <cmath>
using namespace std;

int main()
{
	string str;
	char detect;
	
	cout << "Welcome to Currency Exchange System. We accept USD and TWD: ";
	
	detect = cin.peek();
	cin >> str;
	if(detect == 'U')
	{
		cout << "Convert USD to TWD : ";
		string plus;
		
		for(int i = 3; i < str.size(); i++)
			plus += str[i];
		
		string change;
		int n = stoi(plus) * 30;
		
		cout << "TWD " << n << '\n';
	}
	else if(detect == 'T')
	{
		cout << "Convert TWD to USD : ";
		string plus;
		
		for(int i = 3; i < str.size(); i++)
			plus += str[i];
		
		string change;
		double n = double(stoi(plus)) / 30.0;
		
		cout << "USD " << n << '\n';
	}
	
	return 0;
}
