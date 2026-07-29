#include <iostream> // Q7.8
#include <vector>
using namespace std;

int main()
{
	int max = 0;
	vector<int> grade;
	
	cout << "Input the grades, and input -1 to leave.\n";
	int n;
	cin >> n;
	while(n != -1)
	{
		grade.push_back(n);
		if(n > max)
			max = n;
		cin >> n;
	}
	
	int interval[max+1]; // initialization
	for(int i = 0; i < max+1; i++)
		interval[i] = 0;
	
	for(int i = 0; i < grade.size(); i++)
	{
		interval[ grade[i] ]++;
	}
	
	for(int i = 0; i < max+1; i++)
	{
		cout << interval[i] << " grade(s) of " << i <<'\n';
	}
	return 0;
}
