#include<iostream>

using namespace std;

int main()
{
	int n, score;
	cout << "Par: ";
	cin >> n;
	cout << "Your score: ";
	cin >> score;
	
	int grade = score - n;
	switch(grade)
	{
		case -2:
			cout << "You got Eagle\n";
			break;
		case -1:
			cout << "You got Birdie\n";
			break;
		case 0:
			cout << "You got Par\n";
			break;
		case 1:
			cout << "You got Bogey\n";
			break;
		case 2:
			cout << "You got Double Bogey\n";
			break;
		default:
			break;
	}
	
	return 0;
}

