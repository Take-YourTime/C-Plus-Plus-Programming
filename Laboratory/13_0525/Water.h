#ifndef _WATER_H__
#define _WATER_H_


#include <string>
#include "Pokemon.h"

using namespace std;
class Water : public Pokemon
{
public:
	Water();
	Water(string n, string s, int h, int a);
private:
};

#endif
