#include <iostream>
#include <string>
#include <vector>

#include "Pokemon.h"
#include "Fire.h"
#include "Grass.h"
#include "Water.h"

using namespace std;

int main()
{
	vector<Pokemon> list;
	
	Fire Charmander("Charmander", "fire", 10, 3);
	Fire Charmeleon("Charmeleon", "fire", 20, 7);
	Fire Charizard("Charizard", "fire", 40, 15);
	list.push_back(Charmander);
	list.push_back(Charmeleon);
	list.push_back(Charizard);
	
	Water Squirtle("Squirtle", "water", 10, 3);
	Water Wartoetle("Wartoetle", "water", 20, 7);
	Water Blastoise("Blastoise", "water", 40, 15);
	list.push_back(Squirtle);
	list.push_back(Wartoetle);
	list.push_back(Blastoise);
	
	Grass Bulbasaur("Bulbasaur", "grass", 10, 3);
	Grass Ivysaur("Ivysaur", "grass", 20, 7);
	Grass Venusaur("Venusaur", "grass", 40, 15);
	list.push_back(Bulbasaur);
	list.push_back(Ivysaur);
	list.push_back(Venusaur);
	
	list[0].output();
	Charmeleon.output();
	Charizard.output();
	
	Squirtle.output();
	Wartoetle.output();
	Blastoise.output();
	
	Bulbasaur.output();
	Ivysaur.output();
	Venusaur.output();
	
	cout << "Please enter two pokemons' number:\n";
	int a, b;
	cin >> a >> b;
	if(a > list.size() || b > list.size())
	{
		cout << "Out of range!\n";
		cout << "Must be smaller then " << list.size() << '\n';
		return 0;
	}
	
	while(true)
	{
		// handle a atk b
		cout << list[a].get_name() << " atk >> " << list[b].get_name() << '\n';
		
		if( (list[a].get_type() == "water" && list[b].get_type() == "fire") || (list[a].get_type() == "fire" && list[b].get_type() == "grass") || (list[a].get_type() == "grass" && list[b].get_type() == "water"))
		{
			list[b].set_HP( list[b].get_HP() - list[a].get_ATK()*2 ); // double damage
		}
		else
		{
			list[b].set_HP( list[b].get_HP() - list[a].get_ATK() );
		}
		
		cout << list[b].get_name() << " remain HP " << list[b].get_HP() << "\n\n";
		if(list[b].get_HP() <= 0)
		{
			cout << list[b].get_name() << " dead\n";
			break;
		}
		
		/* ----- */
		// handle b atk a
		cout << list[b].get_name() << " atk >> " << list[a].get_name() << '\n';
		
		if( (list[b].get_type() == "water" && list[a].get_type() == "fire") || (list[b].get_type() == "fire" && list[a].get_type() == "grass") || (list[b].get_type() == "grass" && list[a].get_type() == "water") )
		{
			list[a].set_HP( list[a].get_HP() - list[b].get_ATK()*2 ); // double damage
		}
		else
		{
			list[a].set_HP( list[a].get_HP() - list[b].get_ATK() );
		}
		
		cout << list[a].get_name() << " remain HP " << list[a].get_HP() << "\n\n";
		if(list[a].get_HP() <= 0)
		{
			cout << list[a].get_name() << " dead\n";
			break;
		}
	}
	return 0;
}
