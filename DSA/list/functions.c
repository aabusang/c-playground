#include <stdio.h>
#include <stdlib.h>

#include "header.h"


void addNodeAtStart(int data)
{
    node *new_node = malloc(sizeof(node));
    if (new_node == NULL)
    {
	printf("Out of space\n");
	return;
    }
    new_node->data = data;
    new_node->next = head;
    head = new_node;
    printf("Added (%d) to the beginning\n", data);
}
void addNodeAtEnd(int data)
{
    node *new_node = malloc(sizeof(node));
    node *current = head;
    if (new_node == NULL)
    {
	printf("Out of space\n");
	return;
    }
    new_node->data = data;

    if (head == NULL)
    {
	new_node->next = head;
	head = new_node;
	return;
    }
    while(current->next)
    {
	current = current->next;
    }
    current->next = new_node;

    printf("Added %d to the end\n", data);
}

int len()
{
    node *tmp = head;
    int counter = 0;
    while(tmp)
    {
	++counter;
	tmp = tmp->next;
    }
    return counter;
}
void addNode(int data, int position)
{
    node *current = head;
    node *new_node = malloc(sizeof(node));
    int i = 1;
    if (position < 1 || position > len())
    {
	printf("Invalid position\n");
	return;
    }
    new_node->data = data;
    if (position == 1)
    {
	new_node->next = head;
	head = new_node;
	return;
    }
    if (new_node == NULL)
    {
	printf("Out of space\n");
	return;
    }

    for (i = 0; i < position - 2; i++) // n - 2 because current is already pointing to head which is #1
    {
	current = current->next;
    }
    new_node->next = current->next;
    current->next = new_node;
    printf("Inserted %d at position %d\n", data, position);
}

void deleteNodeAtStart()
{
    node *tmp;
    int deleted;
    if (head == NULL)
    {
	printf("List is empty\n");
	return;
    }
    deleted = head->data;
    tmp = head;
    head = head->next;
    free(tmp);
    printf("Deleted %d at beginning\n", deleted);
}
void deleteNodeAtEnd()
{
    node *toBeDeleted = NULL;
    node *newLast = NULL;
    int deleted;
    if (head == NULL)
    {
	printf("List is empty");
	return;
    }
    toBeDeleted = head;
    while(toBeDeleted->next)
    {
	newLast = toBeDeleted;
	toBeDeleted = toBeDeleted->next;
    }
    
    deleted = toBeDeleted->data;
    newLast->next = NULL;
    free(toBeDeleted);
    printf("Deleted %d at end\n", deleted);
}

void deleteNode(int position)
{
    node *tmp, *toBeDeleted;
    int i;
    if (head == NULL)
    {
	printf("List is empty\n");
	return;
    }
    tmp = head, toBeDeleted = head;
    if (position == 1)
    {
	tmp = head;
	head = head->next;
	free(tmp);
	return;
    }
    for (i = 0; i < position - 2; i++)
    {
	tmp = toBeDeleted;
	toBeDeleted = toBeDeleted->next;
    }
    tmp->next = toBeDeleted->next;
    
    printf("Deleted %d at position %d\n", toBeDeleted->data, position);
    free(toBeDeleted);
}
void reverse()
{
    node *prev = NULL, *current, *next;
    if (head == NULL)
    {
	printf("List is empty\n");
	return;
    }
    current = head;
    while(current)
    {
	next = current->next;
	current->next = prev;
	
	prev = current;
	current = next;
    }
    head = prev;

    printf("List reversed\n");
}
void reversePrint(node *list)
{
    node *tmp = list;
    if (tmp == NULL)
    {
	printf("\n");
	return;
    }
    {
	reversePrint(tmp->next);
	printf("%d ", tmp->data);
    }
}


void recursiveReverse(node *p)
{
    if (p->next == NULL)
    {
	head = p;
	return;
    }
    else
    {
	recursiveReverse(p->next);

	/* prev = current->next; */
	/* prev->next = current; */
	p->next->next = p;
	p->next = NULL;
    }

}

void prompt()
{
    printf("What do you want to do?\n");
    printf("(i) to insert an element into the list\n");
    printf("(q) to quit\n");
}

int validResponse(char response)
{
    char c = response;
    if (c == 'i' || c == 'q')
    {
	return 1;
    }

    return 0;
}


void printList()
{
    node *current = head;

    printf("List: ");
    while(current)
    {
	printf("%d ", current->data);
	current = current->next;
    }
    printf("\n");
}
