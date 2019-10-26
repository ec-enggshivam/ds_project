#include<iostream>

using namespace std;

typedef struct node{
	int data;
	node *next;
} node;

void InsertAtHead(node **head, int data)
{
	  node *newnode = new node;

		if(newnode){
	  	newnode->data = data;
			newnode->next = *head;
			*head = newnode;
		}
}

void print_list(node *head)
{
	cout<<"\nLL is: ";
	while(head){
		cout<< head->data<<" ";
		head = head->next;
	}
}

//The solution is good when checked from online sources - hackerrank etc.
//But it is not working
void InsertAtTail(node **head, int data)
{
	node *newnode = new node;
	
	  if(!*head){
		
	  }
	  
		node *newnode = new node;

		if(newnode){
			newnode->data = data;
			node *temp = *head;
			node *tempptr = temp;
			
			while(temp != NULL){
				tempptr = temp;
				temp = temp->next;
			}
			
			newnode->next= tempptr;
			tempptr->next = temp;
		}
}


int main()
{
	int data;
	unsigned int limit, i=0;
	node *head = NULL; //start with an empty list
	cin>>limit;

	while (i < limit){
		cout<<"Data: ";
		cin>>data;
		InsertAtHead(&head, data);
		i++;
	}
	
	print_list(head);
	
	InsertAtTail(&head, 11);

	print_list(head);
	
	return 0;
}


