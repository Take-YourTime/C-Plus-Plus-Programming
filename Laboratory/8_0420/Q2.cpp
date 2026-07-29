#include <iostream>
#include <string>
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

const Date operator +(const Date& d1, const Date& d2)
{
	int y, m, d;
	y = d1.get_year() + d2.get_year();
	m = d1.get_month() + d2.get_month();
	d = d1.get_date() + d2.get_date();
	
	int det;
	
	switch(m)
	{
	case 1:
		if(d > 31)
		{
			d -= 31;
			m++;
		}
		else
			break;
	case 2:
		if(d > 28)
		{
			d -= 28;
			m++;
		}
		else
			break;
	case 3:
		if(d > 31)
		{
			d -= 31;
			m++;
		}
		else
			break;
	case 4:
		if(d > 30)
		{
			d -= 30;
			m++;
		}
		else	
			break;
	case 5:
		if(d > 31)
		{
			d -= 31;
			m++;
		}
		else
			break;
	case 6:
		if(d > 30)
		{
			d -= 30;
			m++;
		}
		else	
			break;
	case 7:
		if(d > 31)
		{
			d -= 31;
			m++;
		}
		else
			break;
	case 8:
		if(d > 31)
		{
			d -= 31;
			m++;
		}
		else
			break;
	case 9:
		if(d > 30)
		{
			d -= 30;
			m++;
		}
		else	
			break;
	case 10:
		if(d > 31)
		{
			d -= 31;
			m++;
		}
		else
			break;
	case 11:
		if(d > 30)
		{
			d -= 30;
			m++;
		}
		else	
			break;
	case 12:
		if(d > 31)
		{
			d -= 31;
			m++;
		}
		else
			break;
	default:
		break;
	}
	
	if(m > 12)
	{
		y = y + m/12;
		m = m%12;
	}
	
	Date date(y, m, d);
	return date;
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
	
	
	
	cout << "Choose a dates to add (+):";
	string str;
	int n;
	cin >> str;
	cout << " + ";
	cin >> n;
	
	Date newdate;
	Date plus(0, 0, n);
	if(str == "date1")
		newdate = d1 + plus;
	else if(str == "date2")
		newdate = d2 + plus;
	else
		newdate = d3 + plus;
	
	cout << newdate.get_year() << " / " << newdate.get_month() << " / " << newdate.get_date() << '\n';
	return 0;
}
