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

// class LinkedList
// {
// 	Node *head;
// 	Node *tail;
// 	public:
// 	LinkedList()
// 	{
// 		head = NULL;
// 		tail = NULL;
// 	}
// };

// Passing head by reference
void insertAtHead(Node *&head, int data)
{
	Node *n = new Node(data);
	n -> next = head;
	head = n;
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

int len(Node *head)
{
	int n = 0;
	while (head != NULL)
	{
		n++;
		head = head -> next;

	}
	return n;
}

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

void insertInMiddle(Node *&head, int data, int pos)
{
	if (head == NULL || pos == 0)
	{
		insertAtHead(head, data);
	}
	else if (pos > len(head))
	{
		insertAtTail(head, data);
	}
	else
	{
		int n = 1;
		Node *temp = head;
		while (n <= pos - 1)
		{
			temp = temp -> next;
			n++;
		}
		Node *temp2 = new Node(data);
		temp2 -> next = temp -> next;
		temp -> next = temp2;
	}
}

void deleteAtHead(Node *&head)
{
	if (head == NULL)	
		return;
	Node *temp = head;
	head = head -> next;
	delete temp;
}

void deleteAtTail(Node *&head)
{
	Node *prev = NULL;
	Node *temp = head;
	while (temp -> next != NULL)
	{
		prev = temp;
		temp = temp -> next;
	}
	delete temp;
	prev -> next = NULL;
}

void deleteInMiddle(Node *&head, int pos)
{
	if (head == NULL || pos > len(head))
		return;
	if(pos == 0)
	{
		deleteAtHead(head);
		return;
	}
	if (pos == len(head))
	{
		deleteAtTail(head);
		return;
	}
	Node *temp = head;
	int n = 1;
	Node *prev = NULL;
	while (n != pos - 1)
	{
		prev = temp;
		temp = temp -> next;
	}
	prev -> next = temp -> next;
	delete temp;
}

bool searchR(Node *head, int key)
{
	if (head == NULL)
		return false;
	if (head -> data == key)
		return true;
	return searchR(head -> next, key);
}

bool searchI(Node *head, int key)
{
	while (head != NULL)
	{
		if (head -> data == key)
			return true;
		head = head -> next;
	}
	return false;
}

void buildList(Node *&head)
{
	int data;
	cin >> data;
	while (data != -1)
	{
		insertAtTail(head, data);
		cin >> data;
	}
}

istream& operator>>(istream &is, Node *&head)
{
	buildList(head);
	return is;
}

ostream& operator<<(ostream &os, Node *&head)
{
	print(head);
	return os;
}

void reverse(Node *&head)
{
	if (head == NULL)
		return;
	Node *cur = head;
	Node *prev = NULL;
	Node *temp;
	while (cur != NULL)
	{
		temp = cur -> next;
		cur -> next = prev;
		prev = cur;
		cur = cur -> next;
	}
	head = prev;
}

Node* reverseRec(Node *head)
{
	if (head -> next == NULL || head == NULL)
		return head;
	Node *smallhead = reverseRec(head -> next);
	Node *cur = head;
	cur -> next -> next = cur;
	cur -> next = NULL;
	return smallhead;
}

Node* midPoint(Node *head)
{
	if (head == NULL || head -> next == NULL)
		return head;
	Node *slow = head;
	Node *fast = head -> next;
	while (fast != NULL && fast -> next != NULL)
	{
		fast = fast -> next -> next;
		slow = slow -> next;
	}
	return slow;
}

Node* kthNodeFromLast(Node *head, int k)
{
	if (head == NULL || head -> next == NULL)
		return head;
	Node *slow = head;
	Node *fast = head;
	int pos = 0;
	while (pos != k)
	{
		fast = fast -> next;
	}
	while (fast != NULL)
	{
		fast = fast -> next;
		slow = slow -> next;
	}
	return slow;
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

Node* mergeSort(Node *head)
{
	if (head == NULL || head -> next)
		return head;
	// 1. Mid point
	Node *mid = midPoint(head);

	Node *a = head;
	Node *b = mid -> next;
	mid -> next = NULL;

	// 2. Recursively sort
	a = mergeSort(a);
	b = mergeSort(b);

	// 3. Merge
	Node *c = merge(a, b);
	return c;
}

// Cycle Detection
bool detectCycle(Node *head)
{
	if (head == NULL || head -> next == NULL)
		return head;
	Node *slow = head;
	Node *fast = head;
	while (fast != NULL && fast -> next != NULL)
	{
		fast = fast->next->next;
		slow = slow -> next;
		if (fast == NULL)
			return true;
	}
	return false;
}



int main()
{
	Node *head = NULL;
	insertAtHead(head, 5);
	insertAtHead(head, 6);
	insertAtHead(head, 7);
	return 0;
}