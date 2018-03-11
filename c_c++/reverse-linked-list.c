#include <stdio.h>
#include <stdlib.h>

/* Linked List Node */
struct Node
{
  int data;
  struct Node* next;
};

void reverse(struct Node** head_ref);
void push(struct Node** head_ref, int new_data);
void print_linked_list(struct Node *head);

int main()
{
  /* Start with the empty list */
  struct Node* head = NULL;

  push(&head, 20);
  push(&head, 4);
  push(&head, 15);
  push(&head, 85);

  printf("Given Linked List:\n");
  print_linked_list(head);
  reverse(&head);
  printf("\nReversed Linked List:\n");
  print_linked_list(head);
  return 0;
}

/* Reverses the linked list iteratively */
void reverse(struct Node** head_ref)
{
  struct Node* prev = NULL;             // previous pointer is NULL
  struct Node* current = *head_ref;     // current pointer is head_ref
  struct Node* next = NULL;             // next pointer is NULL

  // keep looping through linked list until reach NULL pointer (end)
  while (current != NULL)
  {
    next = current->next;
    current->next = prev;
    prev = current;
    current = next;
  }
  *head_ref = prev;

}
/* Appends to head of linked list */
void push(struct Node** head_ref, int new_data)
{
  /* declare a new node and allocate memory in the heap using malloc
  *  <data type> new_node = (<data type>) malloc(sizeof(<size>))
  */
  struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));

  /* put in the data to the new node */
  new_node->data = new_data;

  /* link the old list off the new node - if list isn't empty */
  //if(*head_ref != NULL)
  new_node->next = (*head_ref);
  /* else if list is empty --> first node in list and next is NULL */
  //else new_node->next = NULL;

  /* move the head to point to the new node */
  (*head_ref) = new_node;
}

/* Prints Linked List */
void print_linked_list(struct Node *head)
{
  struct Node* temp = head;     // get head of linked list
  // iterate until reaches NULL (end of linked list)
  while (temp != NULL)
  {
    printf("d", temp->data);    // prints the integer data of node
    temp = temp->next;          // next node
  }
}
