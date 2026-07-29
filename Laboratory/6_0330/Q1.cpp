#include <iostream>

using namespace std;

struct Grade{
	int score[5] = {0};
	bool finish = true;
	
};

int main()
{
	struct Grade student;
	cout << "Initial struct, scores:";
	for(int x : student.score)
		cout << x << " ";
	cout << '\n';
	
	cout << "Finish intime : " << student.finish;
	
	cout << "Please key in scores\n";
	for(int i=0; i<5; i++)
	{
		cin >> student.score[i];
		if(student.score[i] <= 0)
			student.finish = false;
	}
	
	cout << "Student scores:";
	for(int x : student.score)
		cout << x << " ";
	cout << "Finish intime : " << student.finish;
	return 0;
}
