#include <iostream>
using namespace std;

class Complex{
public:
	Complex();
	Complex(int r, int i);
	
	void operator = (const Complex another);
	
	friend const Complex operator + (Complex th, const Complex another);
	friend const Complex operator - (Complex th, const Complex another);
	friend const Complex operator * (Complex th, const Complex another);
	friend const Complex operator * (Complex th, int n);
	
	friend bool operator == (Complex th, const Complex another);
	
	friend void operator += (Complex& th, const Complex another);
	friend void operator *= (Complex& th, const Complex another);
	
	friend Complex operator ++ (Complex& th);
	friend Complex operator ++ (Complex& th, int n);
	
	friend ostream& operator << (ostream& outs, const Complex& temp);
	friend istream& operator >> (istream& ins, Complex& temp);
private:
	int real;
	int imag;
};


Complex::Complex()
{
	real = 0;
	imag = 0;
}
Complex::Complex(int r, int i)
{
	real = r;
	imag = i;
}


void Complex::operator = (const Complex another)
{
	real = another.real;
	imag = another.imag;
}


Complex const operator + (Complex th, const Complex another)
{
	int r, i;
	r = th.real + another.real;
	i = th.imag + another.imag;
	Complex temp(r, i);
	
	return temp;
}
Complex const operator - (Complex th, const Complex another)
{
	int r, i;
	r = th.real - another.real;
	i = th.imag - another.imag;
	Complex temp(r, i);
	
	return temp;
}
Complex const operator * (Complex th, const Complex another)
{
	int r, i;
	r = th.real * another.real;
	i = th.imag * another.imag;
	Complex temp(r, i);
	
	return temp;
}
Complex const operator * (Complex th, int n)
{
	int r, i;
	r = th.real * n;
	i = th.imag * n;
	Complex temp(r, i);
	
	return temp;
}


bool operator == (Complex th, const Complex another)
{
	return (th.real == another.real && th.imag == another.imag)? true : false;
}


void operator += (Complex& th, const Complex another)
{
	th.real = th.real + another.real;
	th.imag = th.imag + another.imag;
}
void operator *= (Complex& th, const Complex another)
{
	int temp = th.real;
	
	th.real = th.real * another.real - th.imag * another.imag;
	th.imag = th.imag * another.real + temp * another.imag;
}

	
Complex operator ++ (Complex& th)
{
	th.real += 1;
	th.imag += 1;
	return Complex(th.real, th.imag);
}
Complex operator ++ (Complex& th, int n)
{
	int a = th.real, b = th.imag;
	th.real += 1;
	th.imag += 1;
	return Complex(a, b);
}


ostream& operator << (ostream& outs, const Complex& temp)
{
	outs << '(' << temp.real << ',' << temp.imag <<')';
	return outs;
}
istream& operator >> (istream& ins, Complex& temp)
{
	ins >> temp.real >> temp.imag;
	return ins;
}


int main()
{
	Complex A, B;
	int C;
	
	cout << "Enter the pair A(real, imag1): ";
	cin >> A;
	cout << "Enter the pair B(real, imag1): ";
	cin >> B;
	cout << "Enter C: ";
	cin >> C;
	
	cout << "A " << A << '\n';
	cout << "B " << B << '\n';
	cout << "A + B " << A+B << '\n';
	cout << "A * C " << A*C << '\n';
	cout << "A++ " << A++ << '\n';
	cout << "++A " << ++A << '\n';
	
	A += B;
	cout << "A += B " << A << '\n';
	
	A *= B;
	cout << "A *= B " << A << '\n';
	return 0;
}
