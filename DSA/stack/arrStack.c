/* STACKS: implemented using arrays 

 *Application of stacks include, function
 * calls and or recursion
 * Undo in an editor
 * balanced parenthesis

 * Operations of stack is in constant time O(1)
 *****************************************/

#include <stdio.h>

void push(int element); /* add element to the top of stack */
void pop(int element); /* remove element from the top of stack */
int peek();  /* look at what is at the top of the stack without removing it */
int isEmpty(); /* check whether stack is empty */

#define MAX 5
int a_stack[MAX];
int top = -1;

int main(void)
{
    int i;
    for (i = 0; i < MAX; i++)
    {
	push((i+7));
    }

    for (i = 0; i < MAX; i++)
	printf("%d ", a_stack[i]);
    printf("\n");
}

void push(int element)
{
    if (top == MAX - 1)
    {
	printf("Error: Stack Overflow\n");
    }
    else
    {
	a_stack[++top] = element;
    }
}

void pop(int element)
{
    if (top == -1)
    {
	printf("Stact is empty\n");
    }
    else
    {
	--top;
    }
    /* we do just top-- and no need to remove the value */
    /* itself because next time we push we will modify it */
}

int peek()
{
    if (isEmpty() >= 0)
    {
	return a_stack[top];
    }
    else
    {
	return top;
    }
}

int isEmpty()
{
    return top;
}

