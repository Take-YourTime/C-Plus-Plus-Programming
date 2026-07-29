// Q 9.4
#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main()
{
	cout << "Enter the string\n";
	string doc;
	getline(cin, doc); // read in a line
	
	int pos = 0;
	
	for(int i = 0; i < doc.length(); i++)
	{
		if( !isalnum(doc[i]) )
		{
			if(i-pos == 4)
			{
				if(pos == 0)
				{
					doc[pos] = 'L';
					doc[pos+1] = 'o';
					doc[pos+2] = 'v';
					doc[pos+3] = 'e';
					
					pos = i+1;
				}
				else
				{
					doc[pos] = 'l';
					doc[pos+1] = 'o';
					doc[pos+2] = 'v';
					doc[pos+3] = 'e';
					
					pos = i+1;
				}
			}
			else
			{
				pos = i+1;
			}
		}
	}
	
	cout << doc << '\n';
	return 0;
}
