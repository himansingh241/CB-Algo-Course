#include<bits/stdc++.h>
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

void print(Node *head)
{
	while (head != NULL)
	{
		cout << head->data << " ";
		head = head -> next;
	}
	cout << '\n';
}

Node* kreverse(Node* head, int k)
{
	if (head == NULL || head -> next == NULL)
		return head;
	Node *cur = head;
	Node *prev = NULL;
	Node *next = NULL;
	int count = 0;
	while (cur != NULL && k > count)
	{
		count++;
		next = cur -> next;
		cur -> next = prev;
		prev = cur;
		cur = next;
	}
	if (next != NULL)
		head -> next = kreverse(next, k);
	return prev;
}

int main(int argc, char const *argv[])
{
	int n, k;
	cin >> n >> k;
	Node *head = NULL;
	for (int i = 0; i < n; i++)
	{
		int temp;
		cin >> temp;
		insertAtTail(head, temp);
	}
	head = kreverse(head, k);
	print(head);
	return 0;
}
