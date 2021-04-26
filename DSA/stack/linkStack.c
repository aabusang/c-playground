/* Linkedlist implementation of a stack */

#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
}node;

node *top = NULL;

void push(int element);
void pop();
int peek();
void printStack();

int main(void)
{
    push(2);
    push(21);
    push(3);
    push(32);
    push(4);
    push(43);
    printf("\n");
    peek();
    printf("\n");
    pop();
    printStack();

}

void push(int element)

{
    /* we will insert at the beginning of the list instead */
    /* of the end in order to meet the criteria of push and pop using constant time */
    node *new_node = malloc(sizeof(node));
    node *tmp;
    if (new_node == NULL)
    {
	printf("Error: Stack overflow\n");
	
    }
    else
    {
	new_node->data = element;
	new_node->next = top;
	top = new_node;

	/* why won't this below work? */
	/* if (top == NULL) */
	/* { */
	/*     top = new_node; */
	/* } */
	/* else */
	/* { */
	/*     tmp = top->next; */
	/*     new_node->next = tmp; */
	/*     top = new_node; */
	/* } */
    }
    printf("pushed %d\n", element);
}

void pop()
{
    node *tmp;
    int popped;
    if (top == NULL)
    {
	return;
    }
    else
    {
	popped = top->data;
	tmp = top;
	top = top->next;
	free(tmp);
    }
    printf("popped %d\n", popped);
}


int peek()
{
    if (top == NULL)
    {
	printf("Stack is empty\n");
	return -1;
    }
    printf("peeked %d\n", top->data);
    return top->data;
}

void printStack()
{
    node *tmp;
    if (top == NULL)
    {
	printf("Nothing to print from stack\n");
    }
    else
    {
	while(top)
	{
	    printf("%d ", top->data);
	    tmp = top->next;
	    top = tmp;
	}
    }
    printf("\n");
}
