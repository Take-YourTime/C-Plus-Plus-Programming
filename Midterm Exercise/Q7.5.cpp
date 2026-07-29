#include <iostream> // Q7.5
#include <vector>
using namespace std;

int main()
{
	int n;
	cout << "Enter the numbers of suitors\n";
	cin >> n;
	
	vector<int> line;
	for(int i = 0; i < n; i++)
	{
		line.push_back(i+1);
	}
	
	int index = 0;
	index += 2;
	while(index >= n)
		index -= n;
		
	while(line.size() > 1)
	{
		for(int i = 0; i < line.size(); i++)
		{
			cout << line[i] << " ";
		}
		cout << '\n';
		line.erase(line.begin() + index);
		n--;
		index += 2;
		while(index >= n)
			index -= n;
	}
	cout << "To win the princess, you should stand in position " << line[0] << '\n';
	return 0;
}
