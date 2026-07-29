#include <iostream>
#include <string>
using namespace std;

class Month{
public:
	Month(char a, char b, char c);
	Month(int n);
	Month();
	
	void set_month(int n);
	void set_month(string s);
	
	void get_month_int(void);
	void get_month_string(void);
	
	Month get_next(void);
private:
	int month;
};


Month::Month(char a, char b, char c)
{
	switch(a)
	{
	case 'J':
		if(b == 'a') // January
		{
			month = 1;
		}
		else if(c == 'n') // June
			month = 6;
		else if(c == 'l') // July
			month = 7;
			
		break;
	case 'F':
		month = 2; // Feburary
		break;
	case 'M':
		if(c == 'r')
			month = 3; // March
		else if(c == 'y')
			month = 5; // May
		break;
	case 'A':
		if(b == 'p')
			month = 4; // April
		else if(b == 'u')
			month = 8; // August
		break;
	case 'S':
		month = 9; // September
		break;
	case 'O':
		month = 10; // Octobor
		break;
	case 'N':
		month = 11; // November
		break;
	case 'D':
		month = 12; // December
		break;
	default:
		month = 0;
		break;
	}
}
Month::Month(int n)
{
	month = n;
}
Month::Month()
{
	month = 0;
}


void Month::set_month(int n)
{
	month = n;
}
void Month::set_month(string s)
{
	char a = s[0], b = s[1], c = s[2];
	switch(a)
	{
	case 'J':
		if(b == 'a') // January
		{
			month = 1;
		}
		else if(c == 'n') // June
			month = 6;
		else if(c == 'l') // July
			month = 7;
			
		break;
	case 'F':
		month = 2; // Feburary
		break;
	case 'M':
		if(c == 'r')
			month = 3; // March
		else if(c == 'y')
			month = 5; // May
		break;
	case 'A':
		if(b == 'p')
			month = 4; // April
		else if(b == 'u')
			month = 8; // August
		break;
	case 'S':
		month = 9; // September
		break;
	case 'O':
		month = 10; // Octobor
		break;
	case 'N':
		month = 11; // November
		break;
	case 'D':
		month = 12; // December
		break;
	default:
		month = 0;
		break;
	}
}


void Month::get_month_int(void)
{
	cout << month;
}
void Month::get_month_string(void)
{
	switch(month)
	{
	case 1:
		cout << "Jan";
		break;
	case 2:
		cout << "Feb";
		break;
	case 3:
		cout << "Mar";
		break;
	case 4:
		cout << "Apr";
		break;
	case 5:
		cout << "May";
		break;
	case 6:
		cout << "Jun";
		break;
	case 7:
		cout << "Jul";
		break;
	case 8:
		cout << "Aug";
		break;
	case 9:
		cout << "Sep";
		break;
	case 10:
		cout << "Oct";
		break;
	case 11:
		cout << "Nov";
		break;
	case 12:
		cout << "Dec";
		break;
	default:
		break;
	}
}


Month Month::get_next(void)
{
	Month next(month+1);
	return next;
}


int main()
{
	Month a(1);
	Month b('M', 'a', 'y');
	
	cout << "A ";
	a.get_month_int();
	cout << " ";
	a.get_month_string();
	cout << '\n';cout << '\n';
	
	cout << "B ";
	b.get_month_int();
	cout << " ";
	b.get_month_string();
	cout << '\n';cout << '\n';
	
	Month c = a.get_next();
	
	cout << "C ";
	c.get_month_int();
	cout << " ";
	c.get_month_string();
	cout << '\n';cout << '\n';
	
	return 0;
}
