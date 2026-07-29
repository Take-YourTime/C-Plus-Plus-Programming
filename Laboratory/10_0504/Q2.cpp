#include <iostream>
using namespace std;

int main()
{
	cout << "Please enter the number of rows and colums :\n";
	int row, col;
	cin >> row >> col;
	
	int arr[row][col];
	
	typedef int* intPtr;
	intPtr* cell = new intPtr[2];
	for(int i = 0; i < row; i++)
		cell[i] = new int[3];
		
	cout << "Please enter all elements :\n";
	for(int i = 0; i < row; i++)
	{
		for(int j = 0; j < col; j++)
		{
			int n;
			cin >> n;
			arr[i][j] = n;
			
			cell[i][j] = n;
		}
	}
	
	
	cout << "2d array address (General method) :\n";
	for(int i = 0; i < row; i++)
	{
		for(int j = 0; j < col; j++)
		{
			cout << arr[i][j] << " " << &arr[i][j] << " ";
		}
		cout << '\n';
	}	
	
	
	cout << "2d array address (Pointer's method) :\n";
	for(int i = 0; i < row; i++)
	{
		for(int j = 0; j < col; j++)
		{
			cout << cell[i][j] << " " << &(cell[i][j]) << " ";
		}
		cout << '\n';
	}
	
	for(int i=0; i<row; i++){
		delete [] cell[i];
	}
	delete [] cell;

	return 0;
}
