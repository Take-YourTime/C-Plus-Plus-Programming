#include<iostream>

using namespace std;

int main()
{
	int month, count = 0;
	cout << "Please input the month: ";
	cin >> month;
	
	switch(month)
	{
		case 1:
			count+=31;
		case 2:
			count+=28;
		case 3:
			count+=31;
		case 4:
			count+=30;
		case 5:
			count+=31;
		case 6:
			count+=30;
		case 7:
			count+=31;
		case 8:
			count+=31;
		case 9:
			count+=30;
		case 10:
			count+=31;
		case 11:
			count+=30;
		case 12:
			count+=31;
	}
	
	cout << count << " days left this year\n";
	
	return 0;
}

