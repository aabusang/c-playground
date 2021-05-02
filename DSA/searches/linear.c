#include <stdio.h>

#define N 10
int linearSearch(int arr[], int valueToFind);

int main(void)
{
    int i, elem;
    int arr[N] = {3, 2, 5, 1, 9, 8, 7, 6, 0, 4};

    printf("Array: ");
    for (i = 0; i < N; i++)
    {
	printf("%d ", arr[i]);
    }
    printf("\nEnter an element to search for: ");
    scanf("%d", &elem);
    
    if (linearSearch(arr, elem) == 1)
    {
	printf("Found\n");
    }
    else
    {
	printf("Not Found\n");
    }
}
int linearSearch(int arr[], int valueToFind)
{
    int i;
    for (i = 0; i < N; i++)
    {
	if (arr[i] == valueToFind)
	{
	    return 1;
	}
    }
    return 0;
}
