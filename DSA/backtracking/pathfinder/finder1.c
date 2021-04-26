#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define ROWS 2

int theroot(int number);
void print2d(int arr[ROWS][ROWS]);


int main(void)
{
    int *tmp1 = malloc(sizeof(int *));
    int *tmp2 = NULL;
    int maxSize = 10;
    int len = 0;
    int c, i = 0, j, k;
    int maze[rows][rows];
    
    while((c = getchar()) != EOF)
    {
	if (!isdigit(c))
	{
	    continue;
	}
	if (len++ > maxSize)
	{
	    maxSize += (10 * sizeof(int *));
	    tmp2 = realloc(tmp1, maxSize);
	    tmp1 = tmp2;
	}n
	tmp1[i++] = c;
    }


    ROWS = theroot(len);
    maze[ROWS][ROWS] = {}, k = 0;

    for (i = 0; i < rows; i++)
    {
	for (j = 0; j < rows; j++)
	{
	    maze[i][j] = tmp1[k];
	}
    }
    /* print2d(maze, rows); */
    
}

int theroot(int number)
{
    int i, sqroot;
    for (i = 2; i < number; i++)
    {
	if ((i * i) == number)
	{
	    sqroot = i;
	    break;
	}
    }
    return sqroot;
}

void print2d(int arr[ROWS][ROWS])
{
    int i, j;
    for (i = 0; i < ROWS; i++)
    {
	for (j = 0; j < ROWS; j++)
	{
	    printf("%d ", arr[i][j]);
	}
	printf("\n");
    }
}
