#include<stdio.h>
#include<stdio.h>
struct Node{
	int data;
	struct Node* next;
	
};
struct Node *head;
void Insert(int x);
void Print();
int main()
{
	head=NULL;//list is empty;
	Insert(4);
	Insert(5);
	Insert(6);
	Insert(7);
	Insert(9);
	Print();
}
void Insert(int x)
{
	struct Node *temp=(struct Node*)malloc(sizeof(struct Node));
	temp->data=x;
	temp->next=head;
	head=temp;
}
void Print()
{
	struct Node*temp=head;
	printf("List is that :");
	while(temp!=NULL)
	{
		printf(" %d ",temp->data);
		temp=temp->next;
	}
}
