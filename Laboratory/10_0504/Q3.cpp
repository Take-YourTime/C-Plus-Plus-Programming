#include <iostream>
using namespace std;

struct Node{
	Node* next;
	int n;
};

struct Node* top = nullptr;

void push(int n)
{
	Node* newnode = new Node;
	newnode->n = n;
	newnode->next = top;
	top = newnode;
}


void pop(void)
{
	if(top == nullptr)
	{
		cout << "Stack is empty\n";
		return;
	}
	
	Node* temp = top;
	top = temp->next;
	delete temp;
}


void output(void)
{
	if(top == nullptr)
	{
		cout << "Stack is empty\n";
		return;
	}
	
	Node* temp = top;
	while(temp != nullptr)
	{
		cout << temp->n << " ";
		temp = temp->next;
	}
	cout << '\n';
}
int main()
{
	cout << "1 for push in stack, 2 for pop out from stack, 3 for exit:\n";
	
	int mode;
	cin >> mode;
	while(mode != 3)
	{
		switch(mode)
		{
		case 1:;
			int n;
			cout << "Enter a number:\n";
			cin >> n;
			push(n);
			output();
			break;
		case 2:
			pop();
			output();
			break;
		default:
			break;
		}
		
		cout << "1 for push in stack, 2 for pop out from stack, 3 for exit:\n";
		cin >> mode;
	}
	
	return 0;
}
