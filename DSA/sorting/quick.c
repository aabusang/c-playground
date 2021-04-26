#include <stdio.h>

int intcmp(int a, int b);
void swap(int arr[], int posA, int posB);
/* qsort(); */

int main(void)
{
    int N = 10;
    int numbers = {7, 2, 1, 8, 6, 3, 5, 4};
    int i, j;
    int pivot, tmp;

    printf("Before\n");
    for i = 0; i < N; i++)
    {
	printf("%d ", numbers[i]);
    }
    for (i = 0; i < N; i++)
    {
	for (j = 1; j < N - 1; j++)
	{
	    pivot = numbers[n - 1];
	    if (numbers[j] < pivot)
	    {
		swap(numbers, i, j);
	    }
	}
    }

    printf("\nAfter\n");
    for (i = 0; i < N; i++)
    {
	printf("%d ", numbers[i]);
    }
    printf("\n");
    
}

int intcmp(int a, int b)
{
    return a > b;
}

void swap(int arr[], int posA, int posB)
{
    int tmp = arr[posA];
    arr[posA] = arr[posB];
    arr[posB] = tmp;
}
