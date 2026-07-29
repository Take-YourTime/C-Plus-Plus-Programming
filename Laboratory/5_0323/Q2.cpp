#include <iostream>
using namespace std;

int main()
{
	char map[10][10];
	for(int i = 0; i<10; i++)
		for(int j = 0; j<10; j++)
			map[i][j] = ' ';
	
	map[0][0] = 'X'; map[0][1] = 'X'; map[0][8] = 'X'; map[0][9] = 'X';
	map[1][0] = 'X'; map[1][1] = 'X'; map[1][8] = 'X'; map[1][9] = 'X';
	map[8][0] = 'X'; map[8][1] = 'X'; map[8][8] = 'X'; map[8][9] = 'X';
	map[9][0] = 'X'; map[9][1] = 'X'; map[9][8] = 'X'; map[9][9] = 'X';
	
	int row = 0, col = 0;
	while(true)
	{
		for(int i = 0; i < 10; i++) // output
		{
			for(int j = 0; j < 10; j++)
			{
				cout << map[i][j];
			}
			cout << '\n';
		}
		
		cout << "row:";
		cin >> row;
		if(row < 0)
		{
			cout << "end of system\n";
			break;
		}
		else if(row > 9)
		{
			cout << "Booking Error\n\n";
			continue;	
		}
		
		cout << "col:";
		cin >> col;
		if(col < 0)
			break;
		else if(col > 9)
		{
			cout << "Booking Error\n\n";
			continue;	
		}
		
		if(map[row][col] == 'X' || map[row][col] == 'O')
			cout << "Bookind Error\n\n";
		else
		{
			map[row][col] = 'O';
			cout << '\n';
		}
	}
	return 0;
}
