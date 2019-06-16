#include<bits/stdc++.h>
#define ll long long int
using namespace std;

class Node
{
	public:
	int data;
	Node *next;
	Node(int d)
	{
		data = d;
		next = NULL;
	}
};

void insertAtTail(Node *&head, int data)
{
	if (head == NULL)
	{
		head = new Node(data);
		return;
	}
	Node *tail = head;
	while (tail -> next != NULL)
	{
		tail = tail -> next;
	}
	tail -> next = new Node(data);
	return;
}

Node* merge(Node *a, Node *b)
{
	if (a == NULL)
		return b;
	if (b == NULL)
		return a;
	
	Node *c = NULL;

	// Compare a and b for smaller
	if (a -> data < b -> data)
	{
		c = a;
		c -> next = merge(a -> next, b);
	}
	else 
	{
		c = b;
		c -> next = merge(a, b -> next);
	}
	return c;
}

void print(Node *head)
{
	while (head != NULL)
	{
		cout << head->data << " ";
		head = head -> next;
	}
	cout << '\n';
}

int main(int argc, char const *argv[])
{
	int test;
	cin >> test;
	while (test--)
	{
		ll n1, n2;
		cin >> n1;
		Node *head1 = NULL;
		for (ll i = 0; i < n1; i++)
		{
			ll temp;
			cin >> temp;
			insertAtTail(head1, temp);
		}
		cin >> n2;
		Node *head2 = NULL;
		for (ll i = 0; i < n2; i++)
		{
			ll temp;
			cin >> temp;
			insertAtTail(head2, temp);
		}
		Node *head = merge(head1, head2);
		print(head);
	}
	return 0;
}
