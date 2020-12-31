#include <iostream>
using namespace std;

struct node {
	int data;
	node* next;
};

node* createNode(int x)
{
	node* temp = new node;
	temp->next = NULL;
	temp->data = x;
	return temp;
}

void PrintList(node* l)
{
	for (node* p = l; p != NULL; p = p->next)
	{
		cout << p->data << " ";
	}
}

node* AddElement(node* p, int x)
{
	node* temp = createNode(x);
	p->next = temp;
	return temp;
}

int main()
{
	int n, x;
	cin >> n;
	cin >> x;

	node* l = createNode(x);
	node* p = l;
	for (int i = 0; i < n; i++)
	{
		cin >> x;
		p = AddElement(p, x);
	}
	PrintList(l);
	system("pause");
	return 0;
}