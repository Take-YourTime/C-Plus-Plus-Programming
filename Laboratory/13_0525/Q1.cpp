#include <iostream>
#include <string>

#include "Pokemon.h"
#include "Fire.h"
#include "Grass.h"
#include "Water.h"


using namespace std;

int main()
{
	Fire Charmander("Charmander", "fire", 10, 3);
	Fire Charmeleon("Charmeleon", "fire", 20, 7);
	Fire Charizard("Charizard", "fire", 40, 15);
	
	Water Squirtle("Squirtle", "water", 10, 3);
	Water Wartoetle("Wartoetle", "water", 20, 7);
	Water Blastoise("Blastoise", "water", 40, 15);
	
	Grass Bulbasaur("Bulbasaur", "grass", 10, 3);
	Grass Ivysaur("Ivysaur", "grass", 20, 7);
	Grass Venusaur("Venusaur", "grass", 40, 15);
	
	Charmander.output();
	Charmeleon.output();
	Charizard.output();
	
	Squirtle.output();
	Wartoetle.output();
	Blastoise.output();
	
	Bulbasaur.output();
	Ivysaur.output();
	Venusaur.output();
	return 0;
}
