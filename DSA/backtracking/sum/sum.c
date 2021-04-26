#include <stdio.h>

int sum(int n);

int main(void)
{
    int n = 5;
    int results = sum(n);
    printf("Sum: %d\n", results);
}

int sum(int n)
{
    //base case is the only where we provide an explicit answer
    //all other solutions of the problem will build on this base case
    if (n == 0) //base case
    {
	return n;
    }
    else
    {
	return sum(n - 1) + n;
    }
}
