#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int rows = 2;
    int cols = 5;

    int **matrix = malloc(rows * sizeof(int *));

    int i;
    for (i = 0; i < 5; i++)
    {
	matrix[i] = malloc(cols * sizeof(int)); //not guranteed to be in a continguous memory location
    }
}
