#include <stdio.h>
#include <stdbool.h>

#define N 5

bool visited[N][N];
bool find_path(int maze[N][N], int row, int col, int solution[N][N]);

int main(void)
{
    int maze[N][N] = {
	{1, 0, 1, 1, 0},
	{1, 1, 0, 1, 0},
	{0, 1, 1, 0, 0},
	{1, 0, 1, 1, 1},
	{0, 0, 1, 0, 1}};

    int solution[N][N];

    
    for (int i = 0; i < N; i++)
    {
	for (int j = 0; j < N; j++)
	{
	    visited[i][j] = false;
	    solution[j][j] = 0;
	}
	printf("\n");
    }
    
    int row = 0, col = 0;    
    if (find_path(maze, row, col, solution))
    {
	printf("\nPath found\n\n");
    }
    else
    {
	printf("\nPath not found\n\n");
    }
}

bool canVisit(int maze[N][N], int row, int col)
{
    return ((row >= 0 && row <= N - 1) &&
	    (col >= 0 && col <= N - 1) && (maze[row][col] == 1));
}

bool find_path(int arr[N][N], int row, int col, int solution[N][N])
{
    int last = N - 1;
    if ((row == last) && (col == last))
    {
	solution[row][col] = 1;
	return true;
    }
    else
    {
	
	return find_path(arr[N - 1][N - 1]);
    }
}
