#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node *next;
};
struct Node *head;
void Insert(int x){
	struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
	temp->data=x;
	temp->next=NULL;
	if(head!=NULL) temp->next=head;
	
	head = temp;
}
void Print(){
	struct Node *temp=head;
	printf(" list is : " );
	while(temp!=NULL){
		printf("%d",temp->data);
		temp=temp->next;
	}
	printf("\n ");
}
int main()
{
	head =NULL;
	printf("How many number?\n");
	int n,i,x;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter the number");
		scanf("%d",&x);
			Insert(x);
	        Print();
	
	}

}


