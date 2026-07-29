#include <iostream>
using namespace std;

int* line;

int find(int n)
{
	if(n == 0)
		return 0;
	else if(n == 1)
		return 1;
	else
		return find(n-1) + find(n-2);
}

int main()
{
	int size;
	cout << "Input the quantity of numbers: ";
	cin >> size;
	line = new int[size+1];
	
	line[0] = 0;
	line[1] = 1;
	
	for(int i = size; i >= 0; i--)
	{
		cout << find(i) << " ";
	}
	cout << '\n';
	
	delete [] line;
	return 0;
}
