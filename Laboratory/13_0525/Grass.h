#ifndef _GRASS_H_
#define _GRASS_H_

#include <string>
#include "Pokemon.h"

using namespace std;
class Grass : public Pokemon{
public:
	Grass();
	Grass(string n, string s, int h, int a);
private:
};

#endif
