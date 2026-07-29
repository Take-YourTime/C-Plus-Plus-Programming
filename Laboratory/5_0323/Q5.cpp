#include <iostream>
#include <cstdlib>
using namespace std;

char map[5][5];
char bomb[5+2][5+2];

int main()
{
	srand(time(NULL));
	
	// set bomb
	for(int i = 0; i < 7; i++)
	{
		for(int j = 0; j < 7; j++)
		{
			bomb[i][j] = 'O';
		}
	}
	
	for(int i = 1; i <= 5; i++) // the program speed will down since I am lazy
	{
		for(int j = 1; j <= 5; j++)
		{
			bomb[i][j] = 'X';
		}
	}
	
	for(int i = 0; i < 5; i++)
	{
		
		while(true)
		{
			int x = rand()%5+1;
			int y = rand()%5+1;
			
			if(bomb[x][y] != 'O')
			{
				bomb[x][y] = 'O';
				break;
			}
		}
	}
	
	// output bomb map
	for(int i = 1; i <= 5; i++)
	{
		for(int j = 1; j <= 5; j++)
		{
			cout << bomb[i][j] << "  ";
		}
		cout << '\n';
	}
	
	// game map
	for(int i = 0; i < 5; i++)
	{
		for(int j = 0; j < 5; j++)
		{
			map[i][j] = '_';
			cout << map[i][j] << " ";
		}
		cout << '\n';
	}
	
	int count = 0; // if count = 5, win
	while(true)
	{
		char mode;
		cout << "Choose the above options:\n";
		cout << "1(mine) 2(exit)\n";
		cin >> mode;
	
		switch(mode)
		{
			case '1':
			{
				cout << "Enter (x,y): ";
				int x, y;
				cin >> x >> y;
				
				if(bomb[x][y] == 'X')
				{
					cout << "You died!\n";
					return 0;
				}
				else
				{
					count++;
				}
				
				int number = 0;
				for(int i = x-1; i <= x+1; i++) // count the number of bomb
				{
					for(int j = y-1; j <= y+1; j++)
					{
						if(bomb[i][j] == 'X')
							number++;
					}
				}
				
				map[x-1][y-1] = '0' + number;
				
				// game map output
				for(int i = 0; i < 5; i++)
				{
					for(int j = 0; j < 5; j++)
					{
						cout << map[i][j] << " ";
					}
					cout << '\n';
				}
				if(count >= 5)
				{
					cout << "Congratulation! You Win!\n";
					return 0;
				}
				
				break;
			}
			case '2':
				return 0;
			default:
				break;
		}
	}
	
	
	return 0;
}
