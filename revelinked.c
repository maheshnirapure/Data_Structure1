#include<stdio.h> 
#include<stdlib.h>
struct Node{
	int data;
	struct Node*next;
};
struct Node* Reverse(struct Node*head){
	struct Node *current,*prev,*next;
	current=head;
	prev=NULL;
	while(current!=NULL)
	{
		next=current->next;
		current->next=prev;
		prev=current;
		current=next;
	}
	head=prev;
	return head;
}
int main()
{
	struct Node *head=NULL;//local variable;
	head=Insert(head,2);
	head=Insert(head,3);
	head=Insert(head,4);
	head=Insert(head,5);
	head=Insert(head,6);
	printf("given linked list\n");
	Print(head);
	printf("reverse the linked list");
	head=Reverse(head);
	Print(head);	
}
void Insert(struct Node*head,int data)
{
	struct Node *temp=(struct Node*)malloc(sizeof(struct Node));
	temp->data=data;
	temp->next=NULL;
	if(head!=NULL)head=temp;
	else{
		struct Node*temp1=head;
		while(temp1->next!=NULL)temp1=temp1->next;
		temp1->next=temp;
	}
	return head;
}
/*void Print(struct Node* head)
{
	
	while(head!=NULL)
	{
		printf("%d",head->data);
		head=head->next;
	}
}*/
void Print(struct Node* head) 
{ 
	struct Node* temp = head; 
	while (temp != NULL) { 
		printf("%d ", temp->data); 
		temp = temp->next; 
	} 
} 
