#include <iostream>
#include <vector>
using namespace std;
 
class Date{
public:
	Date(int y, int m, int d, int mon);
	
	void set_year(int n);
	void set_month(int n);
	void set_date(int n);
	static void sumPlus(int n);
	
	int get_year(void);
	int get_month(void);
	int get_date(void);
	int get_money(void);
	static int get_sum(void);
private:
	int year;
	int month;
	int date;
	int money;
	static int sum;
};

int Date::sum = 0;

Date::Date(int y, int m, int d, int mon)
{
	year = y;
	month = m;
	date = d;
	money = mon;
}

/*----------------------------------------------*/

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
void Date::sumPlus(int n)
{
	sum += n;
}

/*----------------------------------------------*/

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
int Date::get_money(void)
{
	return money;
}

int Date::get_sum(void)
{
	return sum;
}

/*----------------------------------------------*/

int main()
{
	int mode;
	int index = 0;
	int y, m, d, money;
	vector<Date> account;
	cout << "1.add data\n";
	cout << "2.print\n";
	cout << "3.search\n";
	cout << "4.exit\n";
	
	cin >> mode;
	while(mode != 4)
	{
		switch(mode)
		{
		case 1:
			cin >> y >> m >> d >> money;
			account.push_back( Date(y, m, d, money) );
			account[index].sumPlus(money);
			index++;
			break;
		case 2:
			//	sort
			for(int i = 0; i < account.size() - 1; i++)
			{
				for(int j = 0; j < account.size() - 1 - i; j++)
				{
					if(account[j].get_year() > account[j + 1].get_year())
						swap(account[j], account[j + 1]);
					else if(account[j].get_year() == account[j + 1].get_year())
					{
						if(account[j].get_month() > account[j + 1].get_month())
							swap(account[j], account[j+ 1]);
						else if(account[j].get_month() == account[j + 1].get_month())
						{
							if(account[j].get_date() > account[j + 1].get_date())
								swap(account[j], account[j+ 1]);
							else if(account[j].get_date() == account[j + 1].get_date())
							{
								if(account[j].get_money() > account[j + 1].get_money())
									swap(account[j], account[j+ 1]);
							}
						}
					}
				}	
			}
			
			for(int i = 0; i < account.size(); i++)
			{
				cout << account[i].get_year() << "-" << account[i].get_month() << "-" << account[i].get_date() << " " << account[i].get_money() << '\n';
			}
			cout << "sum " << account[0].get_sum() << '\n';
			break;
		case 3:
			if(account.empty() == true)
			{
				cout << "Your account is empty!\n";
				break;
			}
			
			cin >> y >> m >> d;
			
			for(int i = 0; i < account.size(); i--)
			{
				if(account[i].get_year() == y && account[i].get_month() == m && account[i].get_date() == d)
				{
					cout << y << "-" << m << "-" << d << " " << account[i].get_money() << '\n';
				}
			}
			cout << '\n';
			break;
		default :
			cout << "Wrong mode!\n";
			break;
		}
		
		
		cout << "\n1.add data\n";
		cout << "2.print\n";
		cout << "3.search\n";
		cout << "4.exit\n";
	
		cin >> mode;
	}
	
	return 0;
}
