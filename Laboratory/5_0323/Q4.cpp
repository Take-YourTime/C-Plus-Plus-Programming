#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

char map[9];

void detect(void)
{
		/*-----------------------------------------------*/
		
		// win loss or draw?
		
		//row /*-----------------------------------------------*/
		
		if(map[0] == 'O' && map[1] == 'O' && map[2] == 'O')
		{
			cout << "you win!\n";
			exit(0);
		}
		else if(map[0] == 'X' && map[1] == 'X' && map[2] == 'X')
		{
			cout << "you lose!\n";
			exit(0);
		}
		
		if(map[3] == 'O' && map[4] == 'O' && map[5] == 'O')
		{
			cout << "you win!\n";
			exit(0);
		}
		else if(map[3] == 'X' && map[4] == 'X' && map[5] == 'X')
		{
			cout << "you lose!\n";
			exit(0);
		}
		
		if(map[6] == 'O' && map[7] == 'O' && map[8] == 'O')
		{
			cout << "you win!\n";
			exit(0);
		}
		else if(map[6] == 'X' && map[7] == 'X' && map[8] == 'X')
		{
			cout << "you lose!\n";
			exit(0);
		}
		
		// line /*-----------------------------------------------*/
		if(map[0] == 'O' && map[3] == 'O' && map[6] == 'O')
		{
			cout << "you win!\n";
			exit(0);
		}
		else if(map[0] == 'X' && map[3] == 'X' && map[6] == 'X')
		{
			cout << "you lose!\n";
			exit(0);
		}
		
		if(map[1] == 'O' && map[4] == 'O' && map[7] == 'O')
		{
			cout << "you win!\n";
			exit(0);
		}
		else if(map[1] == 'X' && map[4] == 'X' && map[7] == 'X')
		{
			cout << "you lose!\n";
			exit(0);
		}
		
		if(map[2] == 'O' && map[5] == 'O' && map[8] == 'O')
		{
			cout << "you win!\n";
			exit(0);
		}
		else if(map[2] == 'X' && map[5] == 'X' && map[8] == 'X')
		{
			cout << "you lose!\n";
			exit(0);
		}
		
		// slant /*-----------------------------------------------*/
		if(map[0] == 'O' && map[4] == 'O' && map[9] == 'O')
		{
			cout << "you win!\n";
			exit(0);
		}
		else if(map[0] == 'X' && map[4] == 'X' && map[9] == 'X')
		{
			cout << "you lose!\n";
			exit(0);
		}
		
		if(map[2] == 'O' && map[4] == 'O' && map[6] == 'O')
		{
			cout << "you win!\n";
			exit(0);
		}
		else if(map[2] == 'X' && map[4] == 'X' && map[6] == 'X')
		{
			cout << "you lose!\n";
			exit(0);
		}
		
		/*-----------------------------------------------*/
		// draw
		int draw = 0;
		int i;
		// row
		i = 0;
		if((map[i] == 'O' || map[i+1] == 'O' || map[i+2] == 'O') and (map[i] == 'X' || map[i+1] == 'X' || map[i+2] == 'X'))
			draw++;
			
		i = 3;
		if((map[i] == 'O' || map[i+1] == 'O' || map[i+2] == 'O') and (map[i] == 'X' || map[i+1] == 'X' || map[i+2] == 'X'))
			draw++;
			
		i = 6;
		if((map[i] == 'O' || map[i+1] == 'O' || map[i+2] == 'O') and (map[i] == 'X' || map[i+1] == 'X' || map[i+2] == 'X'))
			draw++;
		
		// line
		i = 0;
		if((map[i] == 'O' || map[i+3] == 'O' || map[i+6] == 'O') and (map[i] == 'X' || map[i+3] == 'X' || map[i+6] == 'X'))
			draw++;
	
		i = 1;
		if((map[i] == 'O' || map[i+3] == 'O' || map[i+6] == 'O') and (map[i] == 'X' || map[i+3] == 'X' || map[i+6] == 'X'))
			draw++;
			
		i = 2;
		if((map[i] == 'O' || map[i+3] == 'O' || map[i+6] == 'O') and (map[i] == 'X' || map[i+3] == 'X' || map[i+6] == 'X'))
			draw++;
			
		// slant
		if(int(map[0]) > 57 && int(map[4]) > 57 && int(map[8]) > 57)
			draw++;
		
		if(int(map[2]) > 57 && int(map[4]) > 57 && int(map[6]) > 57)
			draw++;
		
		if(draw == 8)
		{
			cout << "draw\n";
			exit(0);
		}
		cout << "Black line:" << draw << "\n";
		/*-----------------------------------------------*/
}

int main()
{
	int round = 1;
	
	int index = 0;
	for(int i = 0; i < 3; i++) // original map
	{
		for(int j = 0; j < 3; j++)
		{
			map[index] = '0'+index;
			cout << map[index] << " ";
			index++;
		}
		cout << '\n';
	}
	
	srand(time(NULL));
	do
	{
		// player's round
		cout << "Round " << round << '\n';
		round++;
		
		int n;
		cout << "\tplayer: ";
		cin >> n;
		
		if(map[n] == 'X' or map[n] == 'O')
		{
			cout << "player: ";
			cin >> n;
		}
		
		map[n] = 'O';
		detect();
		
		
		while(true) // AI's round
		{
			int choice = rand()%9;
			if(map[choice] != 'X' && map[choice] != 'O')
			{
				map[choice] = 'X';
				cout << "AI: " << choice << "\n";
				break;
			}
		}
		detect();
		
		
		index = 0;
		cout << '\n';
		for(int i = 0; i < 3; i++) // map output
		{
			for(int j = 0; j < 3; j++)
			{
				cout << map[index] << " ";
				index++;
			}
			cout << '\n';
		}
	}while(true);
	return 0;
}
