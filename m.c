#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
	
}*head;
void Creatnode(int n);
void display();
int main()
{
	int n;
	printf("enter the number of the node");
	scanf("%d",&n);
	Creatnode(n);
	printf("data in the list\n");
	display();
}
void Creatnode(int n){
	struct node *newnode,*temp;
	int data,i;
	if(n<=0){
		printf("list size must be greater than zero");
	}
	if(head==NULL){
		printf("unable to  locate memory");
	}
	else{
		printf("enter the data on the first node");
		scanf("%d",&data);
		head->data=data;
		head->next=NULL;
		temp=head;
		for(i=2;i<=n;i++){
			newnode=(struct node*)malloc(sizeof(struct node));
			if(newnode==NULL)
			{
				printf("unable to locate memory");
			}
			else{
				printf("enter the data of the node %d",i);
				newnode->data=data;
				newnode->next=NULL;
				temp->next=newnode;
				temp=temp->next;
			}
		}
	}
}
void display(){
	struct node *temp;
	if(head==NULL)
	{
		printf("list is empty");
	
	}
	else{
		temp=head;
		while(temp!=NULL)
		{
			printf("data=%d\n",temp->data);
			temp=temp->next;
		}
	}
}
