#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node*next;
};
static void Reverse(struct Nod**head)
{
	struct Node*current,*prev,*next;
	prev=NULL;
	next=NULL;
	current=(*head);
	while(current!=NULL)
	{
		next=current->next;
		current->next=prev;
		prev=current;
		current=next;
	}
	(*head)=prev;
	
}
void Insert(struct Node**head,int data)
{
	struct Node*new_node=(struct Node*)malloc(sizeof(struct Node));
	new_node->data=data;
	new_node->next=(*head);
	(*head)=new_node;
}
void Print(struct Node *head)
{
	struct Node *temp=head;
	while(temp!=0)
	{
		printf("%d ",temp->data);
		temp=temp->next;
	}
}
int main()
{
	struct Node *head=NULL;
	Insert(&head,20);
	Insert(&head,30);
	Insert(&head,40);
	printf("orignal\n");
	Print(head);
	Reverse(&head);
	printf("reverse linked list ");
	Print(head);
}
