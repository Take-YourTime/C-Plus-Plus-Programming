#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class Date{
public:
	Date();
	Date(int y, int m, int d);
	
	int get_year(void) const;
	int get_month(void) const;
	int get_date(void) const;
	
	void set_year(int);
	void set_month(int);
	void set_date(int);
	
	const int operator -(const Date& another);
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

void Date::set_year(int y)
{
	year = y;
}
void Date::set_month(int m)
{
	month = m;
}
void Date::set_date(int d)
{
	date = d;
}


const int Date::operator -(const Date& another)
{	
	int sum1 = 0, sum2 = 0;
	sum1 = year*365 + date;
	
	switch(month-1)
	{
	case 12:
		sum1 += 31;
	case 11:
		sum1 += 30;
	case 10:
		sum1 += 31;
	case 9:
		sum1 += 30;
	case 8:
		sum1 += 31;		
	case 7:
		sum1 += 31;
	case 6:
		sum1 += 30;
	case 5:
		sum1 += 31;
	case 4:
		sum1 += 30;
	case 3:
		sum1 += 31;
	case 2:
		sum1 += 28;
	case 1:
		sum1 += 31;
	default:
		break;
	}
	
	
	sum2 = another.year*365 + another.date;
	switch(another.month-1)
	{
	case 12:
		sum2 += 31;
	case 11:
		sum2 += 30;
	case 10:
		sum2 += 31;
	case 9:
		sum2 += 30;
	case 8:
		sum2 += 31;		
	case 7:
		sum2 += 31;
	case 6:
		sum2 += 30;
	case 5:
		sum2 += 31;
	case 4:
		sum2 += 30;
	case 3:
		sum2 += 31;
	case 2:
		sum2 += 28;
	case 1:
		sum2 += 31;
	default:
		break;
	}
	
	return abs(sum1 - sum2);
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
	
	
	cout << "date1: " << d1.get_year() << " / " << d1.get_month() << " / " << d1.get_date() << '\n';
	cout << "date2: " << d2.get_year() << " / " << d2.get_month() << " / " << d2.get_date() << '\n';
	
	int n = d1 - d2;
	
	cout << "From " << d1.get_year() << " / " << d1.get_month() << " / " << d1.get_date() << " to " << d2.get_year() << " / " << d2.get_month() << " / " << d2.get_date() << ": " << n << " days\n";
	
	return 0;
}
