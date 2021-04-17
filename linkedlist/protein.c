/******************
 *Adam Abusang
 *A program to mutate dna using linked list
 **/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

typedef struct Node
{
  int data;
  struct Node *next;
}node;

node *head = NULL;

void addNode(int number);
void changeNode(int element, int index);
void deleteNode(int position);

void sort(int *arr, int size);
void printlist(node *list);
void freelist(node *list);


int main(int argc, char *argv[])
{
  int i, n, c;
  int d = 0, s = 0;
  char *string, *end;
  int len, base10 = 10, first, mid, last;
  int value, position, dmax = 1, smax = 1;

  int *deleteArr = malloc(sizeof(int));

  int *swapArr = malloc(sizeof(int));
  char *swapptr = malloc(sizeof(char));

  int *tmp;
  
  for (i = 0; i < argc; i++)
  {
    string = argv[i];
    len = strlen(argv[i]);
    first = argv[i][0];
    mid = argv[i][1];
    last = argv[i][len - 1];
    
    if (first == 'd')
    {
      if (d == dmax)
      {
	tmp = realloc(deleteArr, (dmax += 1));
	deleteArr = tmp;
      }
      n = strtol((string + 1), &end, base10);
      deleteArr[d++] = n;
    }
    
    if (isalpha(first) && isdigit(mid) && isalpha(last))
    {
      if (s == smax)
      {
	tmp = realloc(swapArr, (smax += 1));
	swapArr = tmp;
      }
      n = strtol((string + 1), &end, base10);
      swapArr[s] = n;
      swapptr[s] = *end;
      s++;
    }
  }

  while ((c = getchar()) != EOF)
  {
    addNode(c);
  }

  for (i = 0; i < s; i++)
  {
    position = swapArr[i];
    value = swapptr[i];
    changeNode(value, position);
  }

  sort(deleteArr, d);
  d -= 1;
  for (i = d; i >= 0; i--)
  {
    position = deleteArr[i];
    deleteNode(position);
  }

  printlist(head);

  free(deleteArr);
  free(swapArr);
  freelist(head);
  return 0;
}

/*
adds node to a linked list
returns notthing
*/
void addNode(int number)
{
  node *new_node = malloc(sizeof(node));
  node *current = head;

  new_node->data = number;
  new_node->next = NULL;

  if (new_node == NULL)
  {
    printf("No space for another node");
    exit(0);
  }
  if (head == NULL)
  {
    head = new_node;
  }
  else
  {
    while(1)
    {
      if (current->next == NULL)
      {
	/*We are at last node
	  make last node point to new node*/
	current->next = new_node;
	break;
      }
      current = current->next;
    }
  }
}

/*
update the data of a node
returns nothing
*/
void changeNode(int element, int index)
{
    node *current = head;
    int count = 0;
    while(count != index)
    {
        if(current->next)
	{
            current = current->next;
	}
        count++;
    }
    current->data = element;
}

/*
 *sorts an integer array
 *returns nothing
 *******************/
void sort(int *arr, int size)
{
  int i, j, tmp;
  for (i = 0; i < size; i++)
  {
    for (j = i + 1; j < size; j++)
    {
      if (arr[i] > arr[j])
      {
	tmp = arr[i];
	arr[i] = arr[j];
	arr[j] = tmp;
      }
    }
  }
}

/*
 *delete a node from a linked list
 *returns nothing
 *********************/
void deleteNode(int position)
{
  int i = 0;
  node *tmp1 = head;
  node *tmp2;
  if (position < 100)
  {
    for (i = 0; i < position - 1; i++)
    {
      tmp1 = tmp1->next; /* tmp1 points to n - 1th node */
    }
  }
  else
  {
    for (i = 0; i < position; i++)
    {
      tmp1 = tmp1->next; 
    }
  }
  tmp2 = tmp1->next; /* nth node */
  tmp1->next = tmp2->next;
  free(tmp2);
}

/***
 *formate printing of amino acids
 *returns nothing
***************/
void spacedNumbers(int firstNumber)
{
  int i;
  int number = firstNumber;
  for (i = 1; i <= 5; i++)
  {
    number += 10;
    if (i == 1)
    {
      printf("%10d",number);
    }
    else
    {
      if (number <= 1270)
      {
	printf("%11d",number);
      }
    }
  }
  printf("\n");
}

/*
 *print data of a linked list in formatted way
 *returns nothing
*/
void printlist(node *list)
{
  node *current = list;
  int i = 1, c;
  
  printf("Spike protein sequence for B.1.1.7:\n");
  spacedNumbers(0);

  while(current)
  {
    if (current->data == '\n')
    {
      current = current->next;
    }
    c = current->data;

    if ((i % 10 ) == 0)
    {
      if (((i % 50) == 0) || (i > 1260))
      {
	printf("%c", c);
      }
      else
      {
	printf("%c ", c);
      }
    }
    if ((i % 10) != 0)
    {
      printf("%c", c);
    }
    if ((i % 50) == 0)
    {
      printf("\n");
      spacedNumbers(i);
    }

    current = current->next;
    i++;
  }
  printf("\n");
}
/*frees a linked list*/
void freelist(node *list)
{
  node *tmp;
  while(list)
  {
    tmp = list;
    list = list->next;
    free(tmp);
  }
}
