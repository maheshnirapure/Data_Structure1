#include<stdio.h>
#include<stdlib.h>
struct Node{
     int data;
     struct Node*next;


};
struct Node*head;
void Insert(int data,int n);
void Print();
int main()
{
	head=NULL;
	Insert(3,4);
	Insert(1,2);
	Insert(2,1);
	Insert(3,3);
	Print();
}
void Insert(int data,int n)
{
	int i;
	struct Node*temp=(struct Node*)malloc(sizeof(struct Node));
	temp->data=data;
	temp->next=NULL;
	if(n==1)
	{
		temp->next=head;
		head=temp;
		return;
	}
	struct Node*temp1=head;
	for(i=0;i<4-2;i++)
	{
		temp1=temp1->next;
	}
	temp->next=temp1->next;
	temp1->next=temp;
}
void Print()
{
	struct Node *temp=head;
	while(temp!=0)
	{
		printf("%d",temp->data);
		temp=temp->next;
	}
}
