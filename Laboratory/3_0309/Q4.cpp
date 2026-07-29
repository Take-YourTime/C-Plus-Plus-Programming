#include <iostream>
using namespace std;

int player1 = 0, player2 = 0, even = 0;

void detect(char a, char b)
{
	switch(a)
	{
	case 'R':
		if(b == 'R')
		{
			cout << "No winner.\n";
			even++;
		}
		else if(b == 'P')
		{
			cout << "Player2 wins.\n";
			player2++;
		}
		else
		{
			cout << "Player1 wins.\n";
			player1++;
		}
		break;
	case 'P':
		if(b == 'R')
		{
			cout << "Player1 wins.\n";
			player1++;
		}
		else if(b == 'P')
		{
			
			cout << "No winner.\n";
			even++;
		}
		else
		{
			cout << "Player2 wins.\n";
			player2++;
		}
		break;
	case 'S':
		if(b == 'R')
		{
			cout << "Player2 wins.\n";
			player2++;
		}
		else if(b == 'P')
		{
			cout << "Player1 wins.\n";
			player1++;
		}
		else
		{
			cout << "No winner.\n";
			even++;
		}
		break;
	default:
		cout << "Wrong input!\n";
		break;
	}
}

int main()
{	
	char a, b;
	char replay;
	do
	{
		cout << "Please enter euther R)ock, P)aper, or S)cissors: ";
		cin >> a;
		cout << "Please enter euther R)ock, P)aper, or S)cissors: ";
		cin >> b;
		detect(a, b);
		
		cout << "Total to this move:\n";
		cout << "Player 1: " << player1 << '\n';
		cout << "Player 2: " << player2 << '\n';
		cout << "Play Again? Y/y continous, other quits: ";
		cin >> replay;
	}while(replay == 'Y' or replay == 'y');
	cout << "Thanks!\n";
	return 0;
}
