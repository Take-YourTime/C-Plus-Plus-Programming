#include <iostream>
using namespace std;

struct Point{
	int x = 0;
	int y = 0;
};

struct Line{
	Point p1;
	Point p2;
	Point p3;
	Point p4;
};

int main()
{
	Line line;
	int x1 = 0, y1 = 0, x2 = 0, y2 = 0;
	
	cout << "A\n";
	cin >> line.p1.x >> line.p1.y;
	
	cout << "B\n";
	cin >> line.p2.x >> line.p2.y;
	
	cout << "C\n";
	cin >> line.p3.x >> line.p3.y;
	
	cout << "D\n";
	cin >> line.p4.x >> line.p4.y;
	
	x1 = line.p2.x - line.p1.x;
	y1 = line.p2.y - line.p1.y;
	
	x2 = line.p4.x - line.p3.x;
	y2 = line.p4.y - line.p3.y;
	
	if((x1*x2 + y1*y2) == 0)
		cout << "vertical\n";
	else
		cout << "not vertical\n";
	return 0;
}
