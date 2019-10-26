#include<iostream>

using namespace std;

typedef struct node{
	int data;
	node *next;
} node;

void InsertAtKthPos(node **head, int data, int k)
{
	if(*head){
		
	}
	node *newnode = new node;
	
	if(!newnode){
		cout<<"Memory error";
		return;
	}
	
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
		InsertAtKthPos(&head, data);
		i++;
	}

	print_list(head);

	return 0;
}
