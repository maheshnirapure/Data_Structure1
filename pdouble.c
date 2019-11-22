#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node*prev;
	struct Node*next;
};
struct Node*head;
struct Node*GetNewNode(int x)
{
	struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));
	newNode->data=x;
	newNode->prev=NULL;
	newNode->next=NULL;
}
void Insert(int x)
{
	struct Node*newNode=GetNewNode(x);
	if(head==NULL)
	{
		head=newNode;	
		return;
	}
	head->prev=newNode;
	newNode->next=head;
	head=newNode;
	
}
void Print()
{
     struct Node* temp=head;
     printf("forward");
     while(temp!=NULL)
     {
     	printf(" %d ",temp->data);
     	temp=temp->next;
	 }
}
int main()
{
	head=NULL;
	Insert(3);
	Insert(4);
	Insert(6);
	Insert(7);
	Print();
}








