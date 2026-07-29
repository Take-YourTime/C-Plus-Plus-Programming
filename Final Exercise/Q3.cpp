// Q 14.6
#include <iostream>
#include <string>
using namespace std;

class Payment{
public:
	Payment();
	Payment(float p);
	
	float get_pay(void) const;
	void set_pay(float p);
	
	void paymentDetails(void);
private:
	float pay;
};
Payment::Payment()
{
	pay = 0;
}
Payment::Payment(float p)
{
	pay = p;
}
	
float Payment::get_pay(void) const
{
	return pay;
}
void Payment::set_pay(float p)
{
	pay = p;
}

void Payment::paymentDetails(void)
{
	cout << "The cash payment amount is " << pay << "\n\n";
}


class CashPayment : public Payment{
public:
	CashPayment();
	CashPayment(int p, string n, string d, int num);
	
	string get_name(void) const;
	string get_date(void) const;
	int get_number(void) const;
	
	void set_name(string s);
	void set_date(string s);
	void set_number(int n);
	
	void paymentDetails(void);
private:
	string name;
	string date;
	int number;
};
CashPayment::CashPayment()
{
	set_pay(0);
	name = "";
	date = "";
	number = 0;
}

CashPayment::CashPayment(int p, string n, string d, int num)
{
	set_pay(p);
	name = n;
	date = d;
	number = num;
}
	
string CashPayment::get_name(void) const
{
	return name;
}
string CashPayment::get_date(void) const
{
	return date;
}
int CashPayment::get_number(void) const
{
	return number;
}

void CashPayment::set_name(string s)
{
	name = s;
}
void CashPayment::set_date(string s)
{
	date = s;
}
void CashPayment::set_number(int n)
{
	number = n;
}


void CashPayment::paymentDetails(void)
{
	cout << "The credit payment amount is " << get_pay() << '\n';
	cout << "The nmae on the credit card is: " << name << '\n';
	cout << "The expiration date is: " << date << '\n';
	cout << "The credit card number is: " << number << "\n\n";
}
int main()
{
	Payment cash_a(50.5);
	Payment cash_b(20.45);
	
	CashPayment credit_a(10.5, "Fred", "10/5/2010", 123456789);
	CashPayment credit_b(100, "Barney", "11/15/2009", 987654321);
	
	cout << "Cash 1 details:\n";
	cash_a.paymentDetails();
	
	cout << "Cash 2 details:\n";
	cash_b.paymentDetails();
	
	cout << "Credit 1 details:\n";
	credit_a.paymentDetails();
	
	cout << "Credit 2 details:\n";
	credit_b.paymentDetails();
	return 0;
}
