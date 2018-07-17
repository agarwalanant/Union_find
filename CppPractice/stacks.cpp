#include <iostream>

using namespace std;

class Node
{
public:

	int data;
	Node *next;
};

class stacks
{
public:
	Node *top;
	int count =0;
	int pop();
	bool push(int);
	bool isEmpty();

};
int stacks::pop()
{
	if(top == NULL)
	{
		cout<<"Empty stack"<<endl;
	}
	else
	{
		Node *old = top;

		top = top ->next;
		count--;
		int data = old -> data;
		delete(old);
		return data;


	}
}


bool stacks::push(int data)
{
	Node *newtop = new Node;

	if (top == NULL)
	{
		newtop ->data = data;
		newtop ->next = top;
		top = newtop;
		count++;
	}
	else
	{
		newtop ->data= data;
		newtop-> next = top;
		top = newtop;

		count++;
	}
	cout<<newtop ->data<<endl;

	return 1;
}

bool stacks::isEmpty()
{
	if(top == NULL)
		return 1;
	else
		return 0;
}


int main(int argc, char const *argv[])
{
	stacks *s1 = new (stacks);
	s1 -> push(1);
	s1 -> push(3);
	cout<<"popped "<<s1 -> pop();
	return 0;
}
