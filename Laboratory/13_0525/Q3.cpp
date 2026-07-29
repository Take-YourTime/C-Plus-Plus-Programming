#include <iostream>
#include <string>
using namespace std;


class Charactor{
public:
	Charactor();
	Charactor(string s, int l);
	
	void print();
	
	string get_name(void);
	int get_level(void);
	int get_exp(void);
	
	void set_name(string s);
	void set_level(int n);
	void set_exp(int n);
	
	void beatMonster(int exp);
	
	void levelUp(void);
private:
	static const int EXP_LV = 100;
	string name;
	int level;
	int exp;
};

Charactor::Charactor()
{
	
}
Charactor::Charactor(string s, int l)
{
	name = s;
	level = l;
}
	
void Charactor::print()
{
	cout << name << ": Level " << level << '(' << exp << '/' << level*level*100 << ')' << '\n';
}

string Charactor::get_name(void)
{
	return name;
}
int Charactor::get_level(void)
{
	return level;
}
int Charactor::get_exp(void)
{
	return exp;
}
	
	
void Charactor::set_name(string s)
{
	name = s;
}
void Charactor::set_level(int n)
{
	level = n;
}
void Charactor::set_exp(int n)
{
	exp = n;
}

void Charactor::beatMonster(int e)
{
	exp += e;
	while(exp >= level*level*100)
	{
		levelUp();
	}
}

void Charactor::levelUp(void)
{
	level++;
}

/*-------------------------------------------------------------*/


class Knight : public Charactor{
public:
	Knight();
	Knight(string s, int l);
	void print();
private:
	
};

Knight::Knight()
{
}
Knight::Knight(string s, int l)
{
	Knight::set_name(s);
	Knight::set_level(l);
	Knight::set_exp( (Charactor::get_level()-1)*(Charactor::get_level()-1)*100 );
}

void Knight::print()
{
	cout << "Knight " << Charactor::get_name() << ": Level " << Charactor::get_level() << '(' << Charactor::get_exp() << '/' << Charactor::get_level()*Charactor::get_level()*100 << ')' << '\n';
}


/*-------------------------------------------------------------*/


class Warrior : public Charactor{
public:
	Warrior();
	Warrior(string s, int l);
	void print();
private:
	
};

Warrior::Warrior()
{
}
Warrior::Warrior(string s, int l)
{
	Warrior::set_name(s);
	Warrior::set_level(l);
	Warrior::set_exp( (Charactor::get_level()-1)*(Charactor::get_level()-1)*100 );
}

void Warrior::print()
{
	cout << "Warrior " << Charactor::get_name() << ": Level " << Charactor::get_level() << '(' << Charactor::get_exp() << '/' << Charactor::get_level()*Charactor::get_level()*100 << ')' << '\n';
}


int main()
{
	Knight Leo("Leo", 10);
	Knight Tsukasa("Tsukasa", 8);
	Warrior Rose("Rose", 12);
	
	Leo.print();
	Tsukasa.print();
	Rose.print();
	
	cout << "Rose beat the monster\n";
	Rose.beatMonster(10000);
	
	Leo.print();
	Tsukasa.print();
	Rose.print();
	return 0;
}
