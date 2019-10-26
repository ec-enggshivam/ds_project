#include<iostream>

using namespace std;

typedef struct node{
	int data;
	node *next;
} node;

void InsertAtHead(node **head, int data)
{
	node *newnode = new node;
	newnode->data = data;
	newnode->next = *head;
	*head = newnode;
}

void print_list(node *head)
{
	cout<<"LL is: ";
	while(head){
		cout<< head->data<<" ";
		head = head->next;
	}
}

int main()
{
	int data;
	int limit, i=0;
	node *head = NULL; //start with an empty list
	cin>>limit;

	while (i < limit){
		cout<<"Data: ";
		cin>>data;
		InsertAtHead(&head, data);
		i++;
	}

	print_list(head);
	
	return 0;
}


