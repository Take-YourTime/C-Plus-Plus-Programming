#include<iostream>
using namespace std;

int main()
{
	int grade;
	while(true)
	{
		cout << "Please input your score: ";
		cin >> grade;
		
		switch(grade)
		{
		case 80 ... 100:
			cout<< "A\n";
			continue;
		case 70 ... 79:
			cout<< "B\n";
			continue;
		case 60 ... 69:
			cout<< "C\n";
			continue;
		case 50 ... 59:
			cout<< "D\n";
			continue;
		case 0 ... 49:
			cout<< "E\n";
			continue;
		default:
			cout<< "Wrong score!\n";
			break;
		}
		break;
	}	
	return 0;
}
