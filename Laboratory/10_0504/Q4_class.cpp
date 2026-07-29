#include <iostream>
using namespace std;

class Node{
public:
	Node(int n, Node* next);
	Node();
	
	int get_value(void);
	Node* get_next(void);
	
	void set_value(int n);
	void set_next(Node* ptr);
	
private:
	int value;
	Node* next;
};

Node::Node(int n, Node* ptr)
{
	value = n;
	next = ptr;
}
Node::Node()
{
	value = 0;
	next = nullptr;
}


int Node::get_value(void)
{
	return value;
}

Node* Node::get_next(void)
{
	return next;
}

void Node::set_value(int n)
{
	value = n;
}
void Node::set_next(Node* ptr)
{
	next = ptr;
}

/*==================================*/

class Stack{
public:
	Node* get_head(void);
	Node* get_tail(void);
	
	void set_head(Node* current);
	void set_tail(Node* current);
	
	void push(int n);
	void pop(void);
	
private:
	Node* headNode = nullptr;
	Node* tailNode = nullptr;
};


Stack stack; // the stack


Node* Stack::get_head(void)
{
	return headNode;
}
Node* Stack::get_tail(void)
{
	return tailNode;
}
	
void Stack::set_head(Node* current)
{
	headNode = current;
}
void Stack::set_tail(Node* current)
{
	tailNode = current;
}

/*==================================*/
// tail -> head ->
void Stack::push(int n)
{
	Node* newnode = new Node;
	
	newnode->set_value(n);
	newnode->set_next(nullptr);
	
	if(headNode == nullptr)
	{
		headNode = newnode;
		tailNode = newnode;
	}
	else
	{
		headNode->set_next(newnode);
		stack.set_head(newnode);
	}
}


void Stack::pop(void)
{
	if(stack.get_head() == nullptr)
	{
		cout << "Stack is empty\n";
	}
	else
	{
		Node* temp = stack.get_tail();
		stack.set_tail(temp->get_next());
		if(stack.get_tail() == nullptr)
		{
			stack.set_head( stack.get_tail() );
		}
		
		delete temp;
	}
}


void output(void)
{
	if(stack.get_head() == nullptr)
	{
		cout << "Stack is empty, cannot output\n";
		return;
	}	
	
	Node* temp = stack.get_tail();
	
	cout << "In stack: ";
	while(temp != nullptr)
	{
		cout << temp->get_value() << " ";
		temp = temp->get_next();
	}
	cout << '\n';
}

/*==================================*/

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
			stack.push(n);
			output();
			break;
		case 2:
			stack.pop();
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
