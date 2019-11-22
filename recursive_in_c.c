#include <stdio.h>
#include <stdlib.h>

struct Node
{
	int data;
	struct Node* next;
};

// Helper function to print given linked list
void printList(struct Node* head)
{
	struct Node* temp = head;
	while (temp)
	{
		printf("%d -> ", temp->data);
		temp = temp->next;
	}

	printf("NULL\n");
}
void push(struct Node** head, int data)
{
	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
	newNode->data = data;
	newNode->next = *head;

	*head = newNode;
}

// Recursive function to reverse the given linked list. It reverses the
// given linked list by fixing the head pointer first and then .next
// pointers of very node in reverse order
void recursiveReverse(struct Node* head, struct Node** headRef)
{
	struct Node* first;
	struct Node* rest;

	// empty list base case
	if (head == NULL)
	   return;

	first = head;		  // suppose first = {1, 2, 3}
	rest = first->next;	// rest = {2, 3}

	// base case: List has only one node
	if (rest == NULL)
	{
		// fix the head pointer here
		*headRef = first;
		 return;
	}

	// Recursively reverse the smaller {2, 3} case
	// after: rest = {3, 2}
	recursiveReverse(rest, headRef);

	// put the first elem on the end of the list
	rest->next = first;
	first->next = NULL;	// (tricky step -- make a drawing)
}

// Reverse the given linked list. The function takes a pointer
// (reference) to the head pointer
void reverse(struct Node** head)
{
	recursiveReverse(*head, head);
}

// Reverse linked list using Recursion
int main(void)
{
	// input keys
	int keys[] = { 1, 2, 3, 4, 5, 6 };
	int n = sizeof(keys)/sizeof(keys[0]);

	struct Node *head = NULL;
	for (int i = n - 1; i >=0; i--)
		push(&head, keys[i]);

	reverse(&head);

	printList(head);

	return 0;
}
