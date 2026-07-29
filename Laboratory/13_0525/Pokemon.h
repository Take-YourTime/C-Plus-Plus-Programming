/*Pokemon.h*/
#ifndef _POKEMON_H_
#define _POKEMON_H_

#include <string>
#include <iostream>
using namespace std;

class Pokemon{
public:
	Pokemon();
	Pokemon(string n, string s, int h, int a);
	
	void set_name(string s);
	void set_type(string s);
	void set_HP(int n);
	void set_ATK(int n);
	
	string get_name(void) const;
	string get_type(void) const;
	int get_HP(void) const;
	int get_ATK(void) const;
	
	void output();
private:
	string name;
	string type;
	int HP;
	int ATK;
};

#endif
