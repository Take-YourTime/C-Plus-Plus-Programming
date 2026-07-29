#include "TwoD.h"
#include <iostream>
using namespace std;

TwoD::TwoD()
{
	row = 0;
	col = 0;
}

TwoD::TwoD(int r, int c)
{	
	row = r;
	col = c;
	
	matrix = new intPtr[r];
	
	
	for(int i = 0; i < r; i++)
	{
		matrix[i] = new int[c];
	}
}

TwoD::TwoD(const TwoD& a)
{	
	for(int i = 0; i < row; i++)
		for(int j = 0; j < col; j++)
			this->matrix[i][j] = a.matrix[i][j];
}

TwoD::~TwoD()
{
	for(int i = 0; i < row; i++)
	{
		delete [] matrix[i];
	}
	delete [] matrix;
}


void TwoD::set_point(int r, int c, int value)
{
	matrix[r][c] = value;
}

const TwoD TwoD::operator + (const TwoD& a)
{
	TwoD new_TwoD(row, col);
	
	for(int i = 0; i < row; i++)
		for(int j = 0; j < col; j++)
			new_TwoD.matrix[i][j] = matrix[i][j] + a.matrix[i][j];
	
	return new_TwoD;
}

const TwoD TwoD::operator * (const TwoD& a)
{
	TwoD new_TwoD(row, col);
	
	for(int i = 0; i < row; i++)
	{
		for(int j = 0; j < col; j++)
		{
			new_TwoD.matrix[i][j] = 0;
			for(int original_row = i, original_col = 0, a_row = 0, a_col = j; original_col < col; original_col++, a_row++)
			{
				new_TwoD.matrix[i][j] += this->matrix[original_row][original_col] * a.matrix[a_row][a_col];
			}
		}
	}
	
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

