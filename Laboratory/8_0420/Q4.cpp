#include <iostream>
using namespace std;

class Fraction{
public:
	Fraction();
	Fraction(int n, int d);
	
	int get_n(void) const;
	int get_d(void) const;
	
	void set_n(int n);
	void set_d(int d);
	
	const Fraction operator +(const Fraction& another);
	const Fraction operator -(const Fraction& another);
	const Fraction operator -(void);
	const Fraction operator *(const Fraction& another);
	const Fraction operator /(const Fraction& another);
	
private:
	int numerator;
	int denominator;
};

Fraction::Fraction()
{
}
Fraction::Fraction(int n, int d)
{
	numerator = n;
	denominator = d;
}


int Fraction::get_n(void) const
{
	return numerator;
}
int Fraction::get_d(void) const
{
	return denominator;
}


void Fraction::set_n(int n)
{
	numerator = n;
}
void Fraction::set_d(int d)
{
	denominator = d;
}

const Fraction Fraction::operator +(const Fraction& another) 
{
	if(denominator != another.denominator)
	{
		/*
		denominator *= another.denominator;
		numerator *= another.denominator;
	
		another.denominator *= temp;
		another.numerator *= temp;
		*/
		
		Fraction f(another.numerator * denominator + numerator * another.denominator, denominator * another.denominator);
		return f;
	}
	else
	{
		Fraction f(another.numerator + numerator, denominator);
		return f;
	}
}


const Fraction Fraction::operator -(const Fraction& another)
{
	if(denominator != another.denominator)
	{
		/*
		denominator *= another.denominator;
		numerator *= another.denominator;
	
		another.denominator *= temp;
		another.numerator *= temp;
		*/
		
		Fraction f(numerator * another.denominator - another.numerator * denominator, denominator * another.denominator);
		return f;
	}
	else
	{
		Fraction f(numerator - another.numerator, denominator);
		return f;
	}
}

// negative
const Fraction Fraction::operator -(void)
{
	Fraction f(numerator * (-1), denominator);
	return f;
}



const Fraction Fraction::operator *(const Fraction& another)
{
	Fraction f(numerator * another.numerator, denominator * another.denominator);
	return f;
}


const Fraction Fraction::operator /(const Fraction& another)
{
	Fraction f(numerator * another.denominator, denominator * another.numerator);
	return f;
}

int main()
{
	int n, d;
	cout << "A's numerator: ";
	cin >> n;
	cout << "B's denomerator: ";
	cin >> d;
	Fraction a(n, d);
	
	cout << "A's numerator: ";
	cin >> n;
	cout << "B's denomerator: ";
	cin >> d;
	Fraction b(n, d);
	
	cout << "A:" << a.get_n() << '/' << a.get_d() << '\t';
	cout << "B:" << b.get_n() << '/' << b.get_d() << '\n';
	
	
	// output
	Fraction empty(0, 1);
	Fraction temp(0,1);
	
	cout << "A + b / A /t = " << (a+b/a).get_n() << '/' << (a+b/a).get_d() << '\n';
	
	temp =  - b;
	temp = temp / a;
	temp = a - temp;
	cout << "A - (-b) / A /t = " << temp.get_n() << '/' << temp.get_d() << '\n';
	
	temp = a+b;
	temp = temp * (-b);
	cout << "(A + b) * (-B) /t = " << temp.get_n() << '/' << temp.get_d() << '\n';
	
	return 0;
}
