#include <iostream>
using namespace std;
 
class Date{
public:
	Date();
	
	void set_year(int n);
	void set_month(int n);
	void set_date(int n);
	
	int get_year(void);
	int get_month(void);
	int get_date(void);
	
	bool compare(const Date& date);
private:
	int year;
	int month;
	int date;
};

Date::Date()
{
	year = 0;
	month = 0;
	date = 0;
}

bool Date::compare(const Date& another)
{
	if(year == another.year && month == another.month && date == another.date)
		return true;
	else 
		return false;
}

void Date::set_year(int n)
{
	year = n;
}
void Date::set_month(int n)
{
	month = n;
}
void Date::set_date(int n)
{
	date = n;
}


int Date::get_year(void)
{
	return year;
}
int Date::get_month(void)
{
	return month;
}
int Date::get_date(void)
{
	return date;
}


int main()
{
	Date a, b;
	int y, m ,d;
	
	
	cout << "data input\n";
	cin >> y >> m >> d;
	a.set_year(y);
	a.set_month(m);
	a.set_date(d);
	
	cout << "data input\n";
	cin >> y >> m >> d;
	b.set_year(y);
	b.set_month(m);
	b.set_date(d);
	
	cout << "Comparison Result : ";
	if(a.compare(b) == true)
		cout << "the same\n";
	else
		cout << "different\n";
	
	cout << "\ndata output\n";
	cout << "\n
	
	return 0;
}
