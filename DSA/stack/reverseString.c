/* Using stack to reverse a string */

#include <stdio.h>
#include <string.h>

#define N 10
int stack[N];

int top = -1;
void push(char element);
char pop();

int main(void)
{
    int i;
    char string[] = "Hello World";
    int len = strlen(string);
    for (i = 0; i < len; i++)
    {
	push(string[i]);
    }
    printf("String: %s\n", string);
    for (i = 0; i < len; i++)
    {
	string[i] = pop();
    }
    printf("Reversed: %s\n", string);
	
}

void push(char element)
{
    if (top < N)
	stack[++top] = element;
    else
	printf("Stack is full\n");
}

char pop()
{
    if (top > -1)
    {
	--top;
	return stack[top+1];
    }
    else
	printf("Stack is empty\n");
    
    return 0;
}
