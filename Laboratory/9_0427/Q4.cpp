#include <iostream>
#include <string>
#include <cstring>
#include <cctype>
#include <vector>
using namespace std;

int main()
{
	int test = 0;
	
	char doc[10000];
	cout << "[Input the document]\n";
	cin.getline(doc,10000);
	for(int i = 0; i < 1000; i++)
	{
		doc[i] = tolower(doc[i]);
	}
	cout << "[Input the key word]\n";
	
	char key[10][10];
	for(int i=0; i<10; i++)
	{
		cin >> key[i];
		if(key[i][0] == 'E' && key[i][1] == 'O' && key[i][2] == 'F')
			break;
		for(int j = 0; j < strlen(key[i]); j++)
		{
			key[i][j] = tolower(key[i][j]);
		}
		test++;
	}
	
	cout << "[Calculate]\n";
	int count[10] = {0};
	
	const char* sep = " ,.\"!?:-";
	
	char* word;
	word = strtok(doc, sep);
	
	for(int i = 0; i < test; i++)
	{
		cout << key[i] << '\n';
	}
	while(word != NULL)
	{
		for(int i = 0; i < test; i++)
		{
			if(strcmp(word, key[i]) == 0)
			{
				count[i]++;
			}
		}
		word = strtok(NULL, sep);
	}
	
	for(int i = 0; i < test; i++)
	{
		cout << count[i] << " ";
	}
	cout << '\n';
	return 0;
}
