#include <stdio.h>
#include <stdbool.h>

#define N 5
int A[N][N] = {
    {1, 1, 1, 1, 1},
    {1, 0, 1, 1, 1},
    {0, 1, 1, 1, 1},
    {0, 0, 1, 0, 0},
    {1, 0, 1, 1, 1}};
int path[N][N];

int find_path(int row, int col, int matrixSize);

int main(void)
{
    int i, j;
    for (i = 0; i < N; i++)
    {
	for (j = 0; j < N; j++)
	{
	    path[i][j] = 0;
	}
    }
    
    find_path(0, 0, N);
    for (i = 0; i < N; i++)
    {
	for (j = 0; j < N; j++)
	{
	    if (path[i][j] == 1)
	    {
		printf("(%d, %d) -->\n", i, j);
	    }
	}
    }
    
    for (i = 0; i < N; i++)
    {
	for (j = 0; j < N; j++)
	{
	    printf("%d ", path[i][j]);
	}
        printf("\n");
    }
}

int find_path(int row, int col, int matrixSize)
{
    int destination = matrixSize - 1;
    if (row ==  destination && col == destination)
    {
	path[row][col] = 1;
	return 1;
    }

    if (A[row][col] == 1)
    {
	path[row][col] = 1;
	if (find_path(row, col+1, matrixSize) == 1) return 1;
	if (find_path(row+1, col, matrixSize) == 1) return 1;
	path[row][col] = 0;
    }
    return 0;
}
