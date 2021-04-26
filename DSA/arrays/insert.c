#include <stdio.h>

#define N 10
int arr[N+1];

void addToStart(int value);
void insert(int value, int position);
void addToEnd(int value);

int main(void)
{
    int i;
    printf("Original: ");
    for (i = 0; i < N - 1; i++)
    {
	arr[i] = i;
	printf("%d ", arr[i]);
    }

    insert(99, 3);
    printf("\nAfter insertion: ");
    for (i = 0; i < N; i++)
    {
	printf("%d ", arr[i]);
    }

    addToStart(98);
    printf("\nAfter addToStart: ");
    for (i = 0; i < N; i++)
    {
	printf("%d ", arr[i]);
    }

    printf("\n");
}

void addToStart(int value)
{
    int i;
    for (i = N; i > 0; i--)
    {
	arr[i] = arr[i-1];
    }
    arr[0] = value;
}
void insert(int value, int position)
{
    /* shift elements to the right starting from last element */
    /* 	till the position we want to insert the new element */
    int i;
    for (i = N - 1; i >= 0; i--)
    {
	arr[i] = arr[i-1];
	if (i == position)
	{
	    arr[i - 1] = value;
	    break;
	}
    }
}
