#include <iostream>
using namespace std;

typedef int* intPtr;

class TwoD{
public:
	TwoD()
	{
		row = 0;
		col = 0;
	}
	
	TwoD(int r, int c)
	{	
		row = r;
		col = c;
		
		matrix = new intPtr[r];
		
		
		for(int i = 0; i < r; i++)
		{
			matrix[i] = new int[c];
		}
	}
	
	TwoD(const TwoD& a)
	{	
		for(int i = 0; i < row; i++)
			for(int j = 0; j < col; j++)
				this->matrix[i][j] = a.matrix[i][j];
	}
	
	~TwoD()
	{
		for(int i = 0; i < row; i++)
		{
			delete [] matrix[i];
		}
		delete [] matrix;
	}
	
	void set_point(int c, int r, int value);
	
	TwoD operator + (const TwoD& a);
	void operator = (const TwoD& a);
	
	void output(void);
private:
	int col;
	int row;
	intPtr* matrix;
};

void TwoD::set_point(int r, int c, int value)
{
	matrix[r][c] = value;
}

TwoD TwoD::operator + (const TwoD& a)
{
	TwoD new_TwoD(row, col);
	
	for(int i = 0; i < row; i++)
		for(int j = 0; j < col; j++)
			new_TwoD.matrix[i][j] = matrix[i][j] + a.matrix[i][j];
	
	return new_TwoD;
}

void TwoD::operator = (const TwoD& a)
{
	for(int i = 0; i < row; i++)
		for(int j = 0; j < col; j++)
			matrix[i][j] = a.matrix[i][j];
}

void TwoD::output(void)
{
	for(int i = 0; i < row; i++)
	{
		for(int j = 0; j < col; j++)
		{
			cout << matrix[i][j] << " ";
		}
		cout << '\n';
	}
}

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
	m3 = m2;
	m3.output();
	
	cout << "matrix3 = matrix1 + matrix2\n";
	cout << "matrix3 :\n";
	m3 = m1 + m2;
	m3.output();
	
	return 0;
}

