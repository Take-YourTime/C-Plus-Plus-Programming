#include "TwoD.h"
#include <iostream>
using namespace std;

typedef int* intPtr;


int main()
{
	int row, col;
	
	cout << "Enter the row and column dimensions of M1 array :\n";
	cin >> row >> col;
	cout << "Enter " << row << " rows of " << col << " integers each\n";
	TwoD m1(row, col);
	
	for(int i = 0; i < row; i++)
	{
		int value;
		for(int j = 0; j < col; j++)
		{
			cin >> value;
			m1.set_point(i, j, value);
		}
	}
	
	
	cout << "Enter the row and column dimensions of M2 array :\n";
	cin >> row >> col;
	cout << "Enter " << row << " rows of " << col << " integers each\n";
	TwoD m2(row, col);
	
	for(int i = 0; i < row; i++)
	{
		int value;
		for(int j = 0; j < col; j++)
		{
			cin >> value;
			m2.set_point(i, j, value);
		}
	}
	
	
	cout << "matrix3 = matrix2\n";
	cout << "matrix3 :\n";
	TwoD m3(row, col);
	m3 = m1 + m2;
	m3.output();
	
	cout << "matrix3 = matrix1 * matrix2\n";
	cout << "matrix3 :\n";
	m3 = m1 * m2;
	m3.output();
	
	return 0;
}
