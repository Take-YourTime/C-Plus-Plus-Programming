#include <iostream>
#include <cstring>
#include <vector>

using namespace std;

void str_print(vector<string> s, int length = 1)
{
	if(length >= 5)
		s.push_back("~");
	else if(length > 1)
		s.push_back("*");
	else if(length == 1)
		s.push_back("!");
	
	cout << "Output : ";
	
	for(int i = 0; i<s.size(); i++)
	{
		cout << s[i];
	}
	cout << '\n';
}

int main()
{
	vector<string> s;
	string str;
	
	cout << "Inter your string:\n";
	cin >> str;
	
	s.push_back(str);
	
	str_print(s);
	
	str_print(s, str.size());
	
	return 0;	
}
