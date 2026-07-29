#include <iostream>
#include <string>
#include "Pokemon.h"

using namespace std;

Pokemon::Pokemon()
{
	name = " ";
	type = " ";
	HP = 0;
	ATK = 0;
}
Pokemon::Pokemon(string n, string s, int h, int a)
{
	name = n;
	type = s;
	HP = h;
	ATK = a;
}


void Pokemon::set_name(string s)
{
	name = s;
}
void Pokemon::set_type(string s)
{
	type = s;
}
void Pokemon::set_HP(int n)
{
	HP = n;
}
void Pokemon::set_ATK(int n)
{
	ATK = n;
}

string Pokemon::get_name(void) const
{
	return name;
}
string Pokemon::get_type(void) const
{
	return type;
}
int Pokemon::get_HP(void) const
{
	return HP;
}
int Pokemon::get_ATK(void) const
{
	return ATK;
}

void Pokemon::output()
{
	cout << name << " Type:" << type << " HP:" << HP << " ATK:" << ATK << '\n';
}


