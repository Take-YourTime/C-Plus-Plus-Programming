#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
using namespace std;

int main()
{
	string s1, s2;
	
	cout <<  "Enter the first of two input file names: ";
	cin >> s1;
	ifstream file_a;
	file_a.open(s1);
	
	cout <<  "Now a second input file name: ";
	cin >> s2;
	ifstream file_b;
	file_b.open(s2);
	
	double number[20];
	
	for(int i = 0; i < 20 ; i++)
	{
		number[i] = 0.0;
	}
	
	double n;
	int index = 0;
	
	cout << "Contents of file " << s1 << "are:\n";
	file_a >> n;
	while(!file_a.eof())
	{
		cout << n << '\n';
		number[index] = n;
		index++;
		
		file_a >> n;
	}
	
	cout << "Contents of file " << s2 << "are:\n";
	file_b >> n;
	while(!file_b.eof())
	{
		cout << n << '\n';
		number[index] = n;
		index++;
		
		file_b >> n;
	}
	
	cout << "Contents of merged file merge.txt are:\n";
	for(int i = 0; i < index-1; i++)
	{
		for(int j = 0; j < index-i-1; j++)
		{
			if(number[j] > number[j+1])
				swap(number[j], number[j+1]);
		}
	}
	
	ofstream merge("merge.txt");
	for(int i = 0; i < index; i++)
	{
		cout << setw(7) << fixed << setprecision(3) << number[i] << '\n';
		merge << number[i] << " ";
	}
	
	file_a.close();
	file_b.close();
	return 0;	
}
