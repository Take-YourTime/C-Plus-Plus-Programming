#include <iostream>
#include "Grass.h"
using namespace std;


Grass::Grass()
{
	Pokemon::set_name(" ");
	Pokemon::set_type(" ");
	Pokemon::set_HP(0);
	Pokemon::set_ATK(0);
}
Grass::Grass(string n, string s, int h, int a)
{
	Pokemon::set_name(n);
	Pokemon::set_type(s);
	Pokemon::set_HP(h);
	Pokemon::set_ATK(a);
}
