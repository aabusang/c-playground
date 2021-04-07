#include <stdio.h>
#include <stdlib.h>

void allocateArray(int **arr, int size, int value);

int main(void)
{
    int *vector = NULL;
    allocateArray(&vector, 5, 45);
    /*if vector is passed in as a simple pointer and
     * not a pointer to a pointer it won't work 
     *because it's value will be copied to the arr paramater 
     *and changes made to it won't have effects on vector
     ***************************/
    int i;
    for (i = 0; i < 5; i++)
    {
	printf("%d ", vector[i]);
    }
    printf("\n");
}


void allocateArray(int **arr, int size, int value)
{
    *arr = malloc(size * sizeof(int));

    if (*arr != NULL)
    {
	for (int i = 0; i < size; i++)
	{
	    *(*arr + i) = value;
	    //**arr[i] = value;
	}
    }
}
