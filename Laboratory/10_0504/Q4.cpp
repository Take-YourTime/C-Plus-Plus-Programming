#include <iostream>
using namespace std;

struct Node{
	Node* next;
	int n;
};

struct Node* first = nullptr;
struct Node* tail = nullptr;

void push(int n)
{
	Node* newnode = new Node;
	newnode->n = n;
	
	if(tail == nullptr)
	{
		tail = newnode;
		tail->next = nullptr;
		
		first = newnode;
		first->next = nullptr;
	}
	else
	{
		if(tail->next == nullptr)
			tail->next = newnode;
		
		first->next = newnode;
		first = newnode;
		first->next = nullptr;
	}
}


void pop(void)
{
	Node* temp = tail;
	
	if(tail == nullptr)
	{
		cout << "Stack is empty\n";
	}
	else
	{
		tail = tail->next;
		if(tail == nullptr)
			first = nullptr;
		delete temp;
	}
}


void output(void)
{
	if(first == nullptr)
	{
		cout << "Stack is empty\n";
		return;
	}
	
	Node* temp = tail;
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
