#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv)
{
    int i;
    //int arr[] = {0,1,2,3,4,5,6,7,8,9};
    int *arr = malloc(10 * sizeof(int));
    for (i = 0; i < 10; i++)
    {
	arr[i] = i;
    }
    int *ptr_begin = arr;
    int *ptr_end = &arr[9];
    int *current = arr;
    int *ptr_mid = ptr_begin + (ptr_end - ptr_begin)/2;

    printf("Start: %d\nEnd: %d\n", *ptr_begin, *ptr_end);
    printf("Mid: %d\n", *ptr_mid);
    printf("Current: %d\n", *current);
    

    for (i = 0; i < 9; i++)
    {
	*current++ = (i + 1);
	printf("%d ", *current);
    }
    printf("\nCurrent: %d\n", *current);

    int *newArr = realloc(arr, 15 * sizeof(int));
    printf("c - r: %ld\n", (current - arr));

    if (arr == newArr)
    {
	printf("arr == newArr\n");
	printf("realloc expanded / shrink\n");
    }

}
