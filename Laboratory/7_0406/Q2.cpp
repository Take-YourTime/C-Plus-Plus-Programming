#include <iostream>
#include <vector>
using namespace std;
 
int main()
{
	vector<int> grade;
	cout << "Enter each grade and then -1 to stop.\n";
	
	int n ;
	cin >> n;
	while(n != -1)
	{
		grade.push_back(n);
		cin >> n;
	}
	
	int interval[11] = {0};
	
	for(int i = 0; i < grade.size(); i++)
	{
		switch(grade[i])
		{
		case 0 ... 9:
			interval[ grade[i]/10 ]++;
			break;
		case 10 ... 19:
			interval[ grade[i]/10 ]++;
			break;
		case 20 ... 29:
			interval[ grade[i]/10 ]++;
			break;
		case 30 ... 39:
			interval[ grade[i]/10 ]++;
			break;
		case 40 ... 49:
			interval[ grade[i]/10 ]++;
			break;
		case 50 ... 59:
			interval[ grade[i]/10 ]++;
			break;
		case 60 ... 69:
			interval[ grade[i]/10 ]++;
			break;
		case 70 ... 79:
			interval[ grade[i]/10 ]++;
			break;
		case 80 ... 89:
			interval[ grade[i]/10 ]++;
			break;
		case 90 ... 99:
			interval[ grade[i]/10 ]++;
			break;
		case 100:
			interval[ grade[i]/10 ]++;
			break;
		default:
			break;
		}
	}
	
	for(int i = 0; i < 10; i++)
	{
		cout << interval[i] << " grade(s) of [ " << 10*i << " , " << 10*i+9 << " ]\n";
	}
	cout << interval[10] << " grade(s) of 100\n";
	return 0;
}
