#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main()
{
	string str;
	cout << "Enter a string: ";
	cin >> str;
	char s[100];
	strcpy(s, str.c_str());
	
	// cout << s << '\n';
	// cout << strlen(s) << '\n';
	
	char s_re[strlen(s)];
	
	// cout << strlen(s_re) << '\n';
	for(int i=0; i < strlen(s); i++)
	{
		s_re[strlen(s)-1-i] = s[i];
	}
	cout << strlen(s_re) << '\n';
	
	for(int i = 0; i < strlen(s); i++)
	{
		cout << s_re[i];
	}
	cout << '\n';
	// cout << s_re << '\n';
	return 0;
}
