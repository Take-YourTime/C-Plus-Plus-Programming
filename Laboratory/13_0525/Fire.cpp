#include <iostream>
#include "Fire.h"

using namespace std;

Fire::Fire()
{
	Pokemon::set_name(" ");
	Pokemon::set_type(" ");
	Pokemon::set_HP(0);
	Pokemon::set_ATK(0);
}
Fire::Fire(string n, string s, int h, int a)
{
	Pokemon::set_name(n);
	Pokemon::set_type(s);
	Pokemon::set_HP(h);
	Pokemon::set_ATK(a);
}
