// Q12.1 use fstream to declare file
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <vector>
using namespace std;
int main()
{
	string str;
	cout << "Please enter the name of the txt file\n";
	cin >> str;
	
	fstream file;
	file.open(str);
	
	srand(time(NULL));
	cout << "original number: ";
	for(int i = 0; i < 10; i++)
	{
		int n = rand()%100+1; // 1~100
		cout << n << " ";
		file << n << " ";
	}
	cout << endl;
	
	vector<int> list;
	int temp;
	
	while(file >> temp)
	{
		list.push_back(temp);
	}
	
	for(int i = 0; i < list.size()-1; i++)
	{
		for(int j = 0; j < list.size()-1-i; j++)
		{
			if(list[j] > list[j+1])
			{
				swap(list[j], list[j+1]);
			}
		}
	}
	
	cout << "sorted number: ";
	for(int i = 0; i < list.size(); i++)
		cout << list[i] << " ";
	cout << endl;
	
	file.close();
	return 0;
}
