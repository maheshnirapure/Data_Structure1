// Iterative method of linked list
#include <stdio.h> 
#include <stdlib.h> 
struct Node { 
	int data; 
	struct Node* next; 
}; 

void Insert(struct Node** head, int new_data) 
{ 
	struct Node* new_node = (struct Node*)malloc(sizeof(struct Node)); 
	new_node->data = new_data; 
	new_node->next = (*head); 
	(*head) = new_node; 
} 

void printList(struct Node* head) 
{ 
	struct Node* temp = head; 
	while (temp != NULL) { 
		printf("%d ", temp->data); 
		temp = temp->next; 
	} 
} 

int main() 
{ 
	struct Node* head = NULL; 

	Insert(&head, 20); 
	Insert(&head, 4); 
	Insert(&head, 15); 
	Insert(&head, 85);
	Insert(&head,95); 

	printf("Given linked list\n"); 
	printList(head); 
}
