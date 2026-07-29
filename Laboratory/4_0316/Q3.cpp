#include <iostream>
using namespace std;

void order(void)
{
	cout << "steak\n";	
}

void order(char meal)
{
	if(meal == 'A')
		cout << "pork chop\n";
	else if(meal == 'B')
		cout << "chicken steak\n";
	else
		cout << "Enter wrong word!\n";
}

int main()
{
	char ch;
	cout << "would you like to habe today's secial?(y/n): ";
	cin >> ch;
	if(ch == 'y')
	{
		order();
	}
	else if(ch == 'n')
	{
		cout << "What would you like to order?(A/B): ";
		cin >> ch;
		order(ch);
	}
	else
		cout << "Enter wrong word!\n";
	
	
	return 0;	
}
