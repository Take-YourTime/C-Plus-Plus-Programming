#include <iostream>
using namespace std;

class Salary{
public:
	Salary();
	void calculate(void);
	void show(void);
	void set_hours(double);
	void set_money(double);
private:
	
	double hours;
	double salary;
};

Salary::Salary()
{
	hours = 0;
	salary = 0;
}



void Salary::calculate()
{
	int t;
	double work = 0; // work time
	double sum = 0;
	
	for(int i=0; i<7; i++)
	{
		cout << "Day " << i+1 << " :\n";
		cin >> t;
		if(t <= 8 && t >= 0)
		{
			work += t;
			sum += 140*t;
		}
		else if(t <= 10)
		{
			work += 8;
			work += (t-8)*1.33;
			sum += 140*8;
			sum += 140*1.33*(t-8);
		}
		else if(t <= 24)
		{
			work += 8;
			work += 2*1.33;
			work += (t-10)*1.66;
			sum += 140*8;
			sum += 140*1.33*2;
			sum += 140*1.66*(t-10);
		}
	}
	
	Salary::set_hours(work);
	Salary::set_money(sum);
}

void Salary::show(void)
{
	cout << "Your total working hours : " << hours << '\n';
	cout << "Your salary : " << salary << '\n';
}

void Salary::set_hours(double h)
{
	hours = h;
}

void Salary::set_money(double money)
{
	salary = money;
}

int main()
{
	Salary sa;
	sa.calculate();
	sa.show();
	return 0;
}
