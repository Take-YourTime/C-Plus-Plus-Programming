#include <iostream>
#include <fstream>
#include <vector>
#include <cctype>
using namespace std;

int main()
{
	cout << "Start reading true answers and your answers ......\n";
	ifstream correct;
	correct.open("TrueAnswer.txt");
	
	ifstream answer;
	answer.open("MyAnswer.txt");
	
	
	char ch;
	vector<char> question;
	vector<char> ans;
	
	cout << "Question answer is : ";
	correct.get(ch);
	while(!correct.eof())
	{
		cout << ch;
		
		if(isalpha(ch))
		{
			question.push_back(ch);
		}
		correct.get(ch);
	}
	cout << endl;
	
	cout << "Your answer is : ";
	answer.get(ch);
	while(!answer.eof())
	{
		cout << ch;
		
		if(isalpha(ch))
		{
			ans.push_back(ch);
		}
		answer.get(ch);
	}
	cout << endl;
	
	cout << "Calaulate your score ......\n";
	
	double score = 0.0;
	
	for(int i = 0; i < question.size(); i++)
	{
		if(question[i] == ans[i])
		{
			score += 100.0 / question.size();
		}
	}
	cout << "Your score is : " << score << '\n';
	
	correct.close();
	answer.close();
	return 0;	
}
