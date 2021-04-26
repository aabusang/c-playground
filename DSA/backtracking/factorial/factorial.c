#include <stdio.h>

int factorial(int n);

int main(void)
{
    int n = 5;
    printf("Fatorial of %d is %d\n", n, factorial(n));
}

int factorial(int n)
{
    if (n == 1)
    {
	return n;
    }
    else
    {
	return n * factorial(n - 1);
    }
}
