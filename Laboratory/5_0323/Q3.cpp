#include <iostream>
using namespace std;

#define arr_size 100

void swap(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}

void bubbleSort(int size, int n[])
{
	for(int i = 0; i < size-1; i++)
	{
		for(int j = 0; j < size-i-1; j++)
		{
			if(n[j] > n[j+1])
			{
				int temp = n[j];
				n[j] = n[j+1];
				n[j+1] = temp;
			}
		}
	}
}

void selectionSort(int size, int n[])
{
	for(int i = 0; i < size-1; i++)
	{
		int min = n[i], index = i;
		
		for(int j = i+1; j < size; j++) // find the minimal
		{
			if(n[j] < min)
			{
				min = n[j];
				index = j;
			}
		}
		
		int temp = n[i];
		n[i] = n[index];
		n[index] = temp;
	}
}


int main()
{
	char mode = '0';
	cout << "Enter the sorting code: (1.bubble sort; 2.selection sort)\n";
	cin >> mode;
	
	int size = 0;
	cout << "Enter your sorting size : \n";
	cin >> size;
	
	int arr[arr_size] = {0};
	cout << "Enter your sorting numbers : \n";
	for(int i = 0; i < size ;i++)
	{
		cin >> arr[i];
	}
	
	switch(mode)
	{
		case '1':
			bubbleSort(size, arr);
			cout << "Bubble Sort:\n";
			for(int i = 0; i < size; i++)
				cout << arr[i] << " ";
			cout << '\n';
			break;
		case '2':
			selectionSort(size, arr);
			cout << "Selection Sort:\n";
			for(int i = 0; i < size; i++)
				cout << arr[i] << " ";
			cout << '\n';
			break;
		default:
			break;
	}
	
	
	return 0;
}
