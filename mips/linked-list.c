/*
*  Code for a linked list which append head and tail functions.
*  Example to be compiled into MIPS assembly code.
*
*  Compile GCC:
*  unix> mips-mti-elf-gcc -S -O0 -std=c99 -fomit-frame-pointer linked-list.c -o linked-list.s
*/

struct node_t {
  int data;
  struct node_t* next;
};

struct list_t {
  struct node_t* head;
  struct node_t* tail;
};

void list_head_append(struct list_t* list, struct node_t* node)
{
	node->next = list->head;
	list->head = node;
}
void list_tail_append(struct list_t* list, struct node_t* node)
{
	node->next = 0;
	list->tail->next = node;
	list->tail = node;
}
