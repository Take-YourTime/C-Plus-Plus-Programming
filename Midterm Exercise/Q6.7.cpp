#include <iostream> // Q6.7
#include <string>
using namespace std;

class Pizza{
public:
	Pizza(string s, string t, int p, int ch);
	Pizza();
	
	void outputDescription(void);
	
private:
	string size;
	string type;
	int pep;
	int cheese;
};

Pizza::Pizza(string s, string t, int p, int ch)
{
	size = s;
	type = t;
	pep = p;
	cheese = ch;
}

Pizza::Pizza()
{
}


void Pizza::outputDescription()
{
	int price = 0;
	if(size == "Small")
		price += 10;
	else if(size == "Midium")
		price +=14;
	else if(size == "Large")
		price += 17;
	else
		cout << "Wrong size!\n";
	
	price = price + pep*2 + cheese*2;
	
	cout << "This pizza is: " << size << ", " << type << ", with " << pep << " pepperoni toppings and " << cheese << " cheese toppings.\n";
	cout << "Price of pizza: " << price << "\n\n";
}

int main()
{
	Pizza a("Small", "Hand tossed", 0, 3);
	Pizza b("Large", "Pan", 2, 1);
	a.outputDescription();
	b.outputDescription();
	return 0;
}
