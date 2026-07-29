#include <iostream>
#include <string>
#include <vector>
using namespace std;

void str_print(string s, int length = 1)
{
	if(length >= 5)
		s[length] = '~';
	else if(length > 1)
		s[length] = '*';
	else if(length == 1)
		s[s.size()] = '!';
	
	cout << "Output : " << s << '\n';
}

int main()
{
	vector<string> str;
	cout << "Inter your string:\n";
	cin >> str;
	
	str_print(str);
	
	str_print(str, str.size());
	
	return 0;	
}
