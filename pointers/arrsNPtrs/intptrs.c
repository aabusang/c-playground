#include <stdio.h>
#include <stdlib.h>

void display2DArrayUnknownSize(int *arr, int rows, int cols);

int main(int argc, char *argv[])
{
    int *arr[5], i;
    for (i = 0; i < 5; i++)
    {
	*(arr + i) = malloc(sizeof(int));
	**(arr + i) = i; //go to pointer arr + i and set it's value to i
    }

    /**
     *---arr = 100 -> address of the first element of arr
     *---arr + 1 = 104 -> address of the second element of arr
     *---*(arr + 1) = 504 -> value of the (arr + 1), which is an address
     *---**(arr + 1) = 1 -> gives the content of 504 which is now 1
     *******/
    int matrix[][5] = {
	{1, 2, 3, 4, 5},
	{6, 7, 8, 9, 10}};
    
    display2DArrayUnknownSize(*matrix, 2, 5);
    
}
void display2DArrayUnknownSize(int *arr, int rows, int cols) {
    int i, j;
    for (i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++) {
            printf("%d ", *(arr + (i*cols) + j));
        }
        printf("\n");
    }
}
