#include <iostream>
#include <string> // rewrite
using namespace std;

class Date{
public:
	Date();
	Date(int y, int m, int d);
	
	int get_year(void) const;
	int get_month(void) const;
	int get_date(void) const;
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
Date::Date(int y, int m, int d)
{
	year = y;
	month = m;
	date = d;
}

int Date::get_year(void) const
{
	return year;
}
int Date::get_month(void) const
{
	return month;
}
int Date::get_date(void) const
{
	return date;
}

const bool operator > (const Date& d1, const Date& d2)
{
	if(d1.get_year() > d2.get_year())
		return true;
	else if(d1.get_year() < d2.get_year())
		return 0;
	
	if(d1.get_month() > d2.get_month())
		return true;
	else if(d1.get_month() < d2.get_month())
		return 0;
	
	if(d1.get_date() > d2.get_date())
		return true;
	else if(d1.get_date() < d2.get_date())
		return 0;
	else
		return 0;
}

const bool operator < (const Date& d1, const Date& d2)
{
	if(d1.get_year() > d2.get_year())
		return 0;
	else if(d1.get_year() < d2.get_year())
		return 1;
	
	if(d1.get_month() > d2.get_month())
		return 0;
	else if(d1.get_month() < d2.get_month())
		return 1;
	
	if(d1.get_date() > d2.get_date())
		return 0;
	else if(d1.get_date() < d2.get_date())
		return 1;
	else
		return 0;
}


const bool operator == (const Date& d1, const Date& d2)
{
	if(d1.get_year() > d2.get_year())
		return 0;
	else if(d1.get_year() < d2.get_year())
		return 0;
	
	if(d1.get_month() > d2.get_month())
		return 0;
	else if(d1.get_month() < d2.get_month())
		return 0;
	
	if(d1.get_date() > d2.get_date())
		return 0;
	else if(d1.get_date() < d2.get_date())
		return 0;
	else
		return 1;
}

int main()
{
	int y, m, d;
	cout << "Please enter 3 dates to test:\n";
	cout << "Enter the date1 : ";
	cin >> y >> m >> d;
	Date d1(y, m, d);
	
	cout << "Enter the date2 : ";
	cin >> y >> m >> d;
	Date d2(y, m, d);
	
	cout << "Enter the date3 : ";
	cin >> y >> m >> d;
	Date d3(y, m, d);
	
	
	cout << "date1: " << d1.get_year() << " / " << d1.get_month() << " / " << d1.get_date() << '\n';
	cout << "date2: " << d2.get_year() << " / " << d2.get_month() << " / " << d2.get_date() << '\n';
	cout << "date3: " << d3.get_year() << " / " << d3.get_month() << " / " << d3.get_date() << '\n';
	
	
	
	cout << "Choose two dates to cpmpare (>, <, =):";
	string str1, str2;
	cin >> str1 >> str2;
	if(str1 == "date1")
		cout << d1.get_year() << " / " << d1.get_month() << " / " << d1.get_date();
	else if(str1 == "date2")
		cout << d2.get_year() << " / " << d2.get_month() << " / " << d2.get_date();
	else
		cout << d3.get_year() << " / " << d3.get_month() << " / " << d3.get_date();
	
	
	// compare
	if(str1 == "date1" && str2 == "date2")
	{
		if(d1 == d2)
			cout << " = ";
		else if(d1 > d2)
			cout << " > ";
		else
			cout << " < ";
	}
	else if(str1 == "date1" && str2 == "date3")
	{
		if(d1 == d3)
			cout << " = ";
		else if(d1 > d3)
			cout << " > ";
		else
			cout << " < ";
	}
	else
	{
		if(d2 == d3)
			cout << " = ";
		else if(d2 > d3)
			cout << " > ";
		else
			cout << " < ";
	}
	
	
	if(str2 == "date1")
		cout << d1.get_year() << " / " << d1.get_month() << " / " << d1.get_date() << '\n';
	else if(str2 == "date2")
		cout << d2.get_year() << " / " << d2.get_month() << " / " << d2.get_date() << '\n';
	else
		cout << d3.get_year() << " / " << d3.get_month() << " / " << d3.get_date() << '\n';
	
	return 0;
}
