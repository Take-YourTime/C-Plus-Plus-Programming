#include <iostream>
#include <iterator>
using namespace std;

class Grade{
public:
	Grade();
	void set_score(int arr[]);
	void set_finish(bool b);
	
	bool get_finish(void);
	
	double ave(void);
	int min(void);
	int max(void);
private:
	int score[5];
	bool finish;
};

Grade::Grade()
{
	for(int i=0; i<5; i++)
	{
		score[i] = 0;
	}
	finish = true;
}

void Grade::set_score(int arr[])
{
	for(int i=0; i < 5; i++)
	{
		score[i] = arr[i];
	}
}

void Grade::set_finish(bool b)
{
	finish = b;
}

bool Grade::get_finish(void)
{
	return finish;
}

double Grade::ave(void)
{
	double sum = 0;
	int i;
	for(i=0; i < 5; i++)
	{
		sum += score[i];
		cout << "sum:" << sum <<endl;
	}
	
	return sum = sum/(i);
}

int Grade::min(void)
{
	int min = score[0];
	for(int i=0; i<5; i++)
	{
		if(min > score[i])
			min = score[i];
	}
	return min;
}

int Grade::max(void)
{
	int max = score[0];
	for(int i=0; i<5; i++)
	{
		if(max < score[i])
			max = score[i];
	}
	return max;
}

int main()
{
	class Grade student;
	int score[5] = {0};
	cout << "Please key in scores\n";
	for(int i=0; i<5; i++)
	{
		cin >> score[i];
		if(score[i] <= 0)
			student.set_finish(false);
	}
	
	student.set_score(score);
	
	cout << "Student scores : ";
	for(int x : score)
		cout << x << " ";
	cout << "\nFinish intime : " << student.get_finish();
	cout << "\nAverage : " << student.ave() << " , " << "Max : " << student.max() << " , " << "Min : " << student.min() <<'\n';
	return 0;
}
