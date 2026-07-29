#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
	srand(time(NULL));
	// A~Z 65~90
	for(int i = 0; i<10; i++)
	{
		cout << (char)(rand()%26+65);
	}
	cout << '\n';
	return 0;
}
