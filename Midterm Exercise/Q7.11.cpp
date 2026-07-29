#include <iostream> // Q7.11
#include <vector>
#include <string>
using namespace std;

class Player{
public:
	Player();
	Player(string str, int n);
	
	string get_name(void);
	int get_score(void);

private:
	string name;
	int score;
};

Player::Player()
{
	name = "";
	score = 0;
}

Player::Player(string str, int n)
{
	name = str;
	score = n;
}


string Player::get_name(void)
{
	return name;
}
int Player::get_score(void)
{
	return score;
}


int main()
{
	vector<Player> team;
	
	cout << "Choose what you want to do?\n";
	cout << "a. Add a new player's information\n";
	cout << "b. Print all players' information\n";
	cout << "c. Seach\n";
	cout << "d. Remove a player's information\n";
	cout << "e. End the program\n";
	
	char mode;
	string str; // name
	int n; // score
	int k;
	
	cin >> mode;
	while(mode != 'e')
	{
		switch(mode)
		{
		case 'a':
			cout << "Enter the player's name and score: ";
			
			cin >> str >> n;
			team.push_back( Player(str, n) );
			break;
		case 'b':
			if(team.empty() == true)
			{
				cout << "There are no plyer in the list!\n";
				break;
			}
			for(int i = 0; i < team.size(); i++)
			{
				cout << team[i].get_name() << " : " << team[i].get_score() << '\n';
			}
			break;
		case 'c':
			cout << "Enter a name to search: ";
			cin >> str;
			
			for(k = 0; k < team.size(); k++)
			{
				if(team[k].get_name() == str)
				{
					cout << team[k].get_name() << " : " << team[k].get_score() << '\n';
					break;
				}
			}
			if(k == team.size())
				cout << "Unfound the player!\n";
			break;
		case 'd':
			cout << "Enter a name to remove: ";
			cin >> str;
			for(k = 0; k < team.size(); k++)
			{
				if(team[k].get_name() == str)
				{
					team.erase(team.begin()+k);
					k = -1;
					break;
				}
			}
			/*
			when k = -1, team.size() = 0
			it said that k > team.size()
			
			original code:
			
			cout << "k " << k <<'\n';
			cout << team.size() <<'\n';
			*/
			if(k <= team.size())
			{
				cout << "Unfound the player!\n";
			}
			break;
		default:
			break;
		}
		
		cout << "\nChoose what you want to do?\n";
		cout << "a. Add a new player's information\n";
		cout << "b. Print all players' information\n";
		cout << "c. Seach\n";
		cout << "d. Remove a player's information\n";
		cout << "e. End the program\n";
		cin >> mode;
	}
	
	return 0;
}
