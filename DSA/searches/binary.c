#include <stdio.h>

#define N 10

int binarySearch(int arr[], int valueToFind);
int main(void)
{
    int i, elem;
    int arr[N] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    
    printf("array: ");
    for (i = 0; i < N; i++)
    {
	printf("%d ", arr[i]);
    }
    printf("\nEnter number to search: ");
    scanf("%d", &elem);
    if (binarySearch(arr, elem) == 1)
    {
	printf("Found\n");
    }
    else
    {
	printf("Not Found\n");
    }
}

int binarySearch(int arr[], int valueToFind)
{
    int i, n = N;
    int start = 0, end = n, mid = end/2;
    for (i = start; i < end; i++)
    {
	if (arr[mid] == valueToFind)
	{
	    return 1;
	}
	if (arr[mid] > valueToFind)
	{
	    /* search left */
	    end = n/2;
	    mid = (start + end)/2;
	}
	else
	{
	    /* search right */
	    start = mid;
	    mid = (start + end)/2;
	}
    }
    return 0;
}
