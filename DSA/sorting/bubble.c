/* A program to implement different variations of bubble sort, from least to more efficient */

#include <stdio.h>
#include <string.h>
#include <time.h>

void bsort1(int arr[], int size);
void bsort2(int arr[], int size);


void bsort(void *arr, int size);


int main(void)
{
    int i;
    int size = 10;
    int numbers[] = {45, 12, 34, 23, 54, 87, 91, 99, 5, 49};

    printf("Before:  ");
    for (i = 0; i < size; i++)
    {
	printf("%d ", numbers[i]);
    }
    
    /* bsort1(numbers, size); */
    bsort2(numbers, size);
    /* bsort(numbers, size); */
    
    printf("\nAfter:   ");
    for (i = 0; i < size; i++)
    {
	printf("%d ", numbers[i]);
    }
    printf("\n");
    printf("Time: %f\n", (float)clock()/CLOCKS_PER_SEC);
    
    return 0;
}


void bsort1(int arr[], int size)
{
    int i, j, tmp;
    for (i = 0; i < size; i++)
    {
	for (j = 0; j < size - 1; j++)
	{
	    if (arr[j] > arr[j+1])
	    {
		tmp = arr[j];
		arr[j] = arr[j+1];
		arr[j+1] = tmp;
	    }
	}
    }
    
    return;
}

void bsort2(int arr[], int size)
{
    int i, j, tmp;
    for (i = 0; i < size; i++)
    {
	for (j = 0; j < size - 1; j++)
	{
	    if (arr[i] < arr[j])
	    {
		tmp = arr[i];
		arr[i] = arr[j];
		arr[j] = tmp;
	    }
	}
    }
    return;
}

/* dynamic bubble sort function to sort any data */
void bsort(void *arr, int size)
{
    int i, j;
    void *tmp;
    for (i = 0; i < size; i++)
    {
	for (j = 0; j < size - 1; j++)
	{
	    if (strcmp(&arr[j], &arr[j+1]) > 0)
	    {
		/* tmp = &arr[j]; */
		/* arr[j] = &arr[j+1]; */
		/* arr[j+1] = &tmp; */

		/* strcpy(tmp, arr[j]); */
		/* strcpy(&arr[j], arr[j+1]); */
		/* strcpy(&arr[j+1], tmp); */
	    }
	}
    }    
}
