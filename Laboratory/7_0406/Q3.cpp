#include <iostream>
#include <string>
#include <vector>
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
private:
	int year;
	int month;
	int date;
};


class Record{
public:
	Record(string, int, int, int);
	
	Date getDate() const;
	static int get_total(void);
	string get_name(void);
	
	void set_name(string);
	static void set_total(int n);
	
	static void totalPlus(void);
private:
	Date date;
	string name;
	static int total;
};

int Record::total = 0;
/*----------------------------------------------*/

Date::Date()
{
	year = 0;
	month = 0;
	date = 0;
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
/*----------------------------------------------*/

Record::Record(string str, int a, int b, int c)
{
	name = str;
	date.set_year(a);
	date.set_month(b);
	date.set_date(c);
}


void Record::set_name(string str)
{
	name = str;
}
void Record::set_total(int n)
{
	total = n;
}


int Record::get_total(void)
{
	return total;
}
string Record::get_name(void)
{
	return name;
}

Date Record::getDate() const
{
	return date;
}



void Record::totalPlus(void)
{
	total++;
}

/*----------------------------------------------*/

int main()
{
	vector<Record> student;

	string str;
	int y, m, d;
	int index = 0;
	
	cout << "data input\n";
	cin >> str;
	while(str != "exit")
	{
		cin >> y >> m >> d;
		student.push_back(Record(str, y, m, d));
		student[index].totalPlus();
		
		index++;
		cout << "data input\n";
		cin >> str;
	}
	
	
	cout << "\ndata output\n";
	for(int i = 0; i < index; i++)
	{
		cout << student[i].get_name() << " " << (student[i].getDate()).get_year() << " " << student[i].getDate().get_month() << " " << student[i].getDate().get_date() << '\n';
	}
	cout << "total students: " << student[0].get_total() << '\n';
	
	
	return 0;
}
