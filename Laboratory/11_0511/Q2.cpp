#include <iostream>
#include <ctime>
#include <cstdlib>
#include <vector>
using namespace std;

/*
struct Location{
	int x;
	int y;
	int value;
};
*/

int main()
{
	int col, row;
	int non_zero;
	
	cout << "Enter total Rows and Columns : ";
	cin >> col >> row;
	
	
	typedef int* intPtr;
	
	intPtr* matrix = new intPtr[col];
	for(int i = 0; i < col; i++)
	{
		matrix[i] = new int[row];
		for(int j = 0; j < row; j++)
		{
			matrix[i][j] = 0;
		}
	}
	
	
	cout << "Enter total non-zero values : ";
	cin >> non_zero;
	
	// vector <Location>stack; // stack
	
	// calculate
	srand(time(NULL));
	while(non_zero > 0)
	{
		int x, y;
		do{
			x = rand()%col;
			y = rand()%row;
		}while(matrix[x][y] != 0);
		
		matrix[x][y] = rand()%9 + 1;
		
		non_zero--;
	}
	
	cout << "The element of the sparse matrix :\n";
	
	for(int i = 0; i < col; i++)
	{
		cout << "[ ";
		for(int j = 0; j < row; j++)
		{
			cout << matrix[i][j] << " ";
		}
		cout << "]\n";
	}
	
	cout << "\n(Row Col   value)\n";
	for(int i = 0; i < col; i++)
	{
		for(int j = 0; j < row; j++)
		{
			if(matrix[i][j] != 0)
			{
				cout << "( " << i << "   " << j << "\t    " << matrix[i][j] << " )\n";
			}
		}
	}
	
	for(int j = 0; j < row; j++)
	{
		delete [] matrix[j];
	}
	delete [] matrix;
	return 0;
}
