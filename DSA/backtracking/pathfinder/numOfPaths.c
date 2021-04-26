#include <stdio.h>

#define N 2 
#define M 4
int numOfPaths(int n, int m);

int main(void)
{
    int grid[N][M];

    int answer = numOfPaths(N, M);
    printf("number of paths for %d by %d grid is %d\n",N, M, answer);
}

int numOfPaths(int n, int m)
{
    if (n == 1 || m == 1)
    {
	return 1;
    }
    else
    {
	return numOfPaths(n, m - 1) + numOfPaths(n - 1, m);
    }
}
