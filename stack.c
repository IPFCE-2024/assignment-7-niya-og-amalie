#include "stack.h"
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

void initialize(stack *s) {
  // implement initialize here
  assert(s != 0);
  s->head = NULL; //Head is NULL when stack is empty
}

void push(int x, stack *s) {
  // implement push here (add a new element to the top of the stack)
  assert(s != 0);
  node* p = (node*)malloc(sizeof(node)); //Allocating memory for a new node in linked list
  p->data = x; //Set data in new node to 'x'
  p->next = s->head; //Pointer in new node to point to the former head
  s->head = p; //Update head to be the new node
}

int pop(stack *s) {
  // implement pop here (remove the top element)
  assert(s != 0);
  int popped_node = s->head->data; //Integer set to the data from the head node
  node *temp = s->head; //Set up a temporary node to save the current head node
  s->head = s->head->next; //Update head node to the next node (second top node)
  free(temp); //Free the the former head node
  return popped_node;
}

bool empty(stack *s) {
  // implement empty here
  return s->head == NULL; //If the top element is NULL the stack is empty
}

bool full(stack *s) {
  // implement full here
  //Since the stack is on singly-linked lists the stack can't be full
  return false;
}
