#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
}node;

node *head = NULL;
node *tail = NULL;

void enqueue(int data);
void dequeue();

void printQ();


int main(void)
{
    int i, n = 10;
    for (i = 0; i < n; i++)
    {
	enqueue((i+10));
	printf("\nQueued\n");
	if (i < n-1) printQ();
    }
    printQ();
    for (i = 0; i < n; i++)
    {
	dequeue();
	printf("\nDequeued\n");
	printQ();
    }
}


void enqueue(int data)
{
    /* add new node to the end of the list - tail */
    node *new_node = malloc(sizeof(node));
    if (new_node == NULL) return;
    new_node->data = data;
    new_node->next = NULL;
    
    if (head == NULL && tail == NULL)
    {
	head = tail = new_node;
	return;
    }
    tail->next = new_node;
    tail = new_node;
}

void dequeue()
{
    /* remove element in the head of the list - head */
    node *tmp = head;
    if (head == NULL)
    {
	printf("Queue is empty\n");
	return;
    }
    head = head->next;
    free(tmp);
}


void printQ()
{
    node *tmp = head;
    while(tmp)
    {
	printf("%d ", tmp->data);
	tmp = tmp->next;
    }
}
