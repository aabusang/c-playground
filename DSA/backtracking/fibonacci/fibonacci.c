#include <stdio.h>
#include <stdbool.h>

int calculated[51];

int fibonacci(int n);

int main(void)
{
    int n, i;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (i = 0; i < 50; i++)
    {
	calculated[i] = -1;
    }
    for (i = 0; i < n + 1; i++)
    {
	printf("%d ", fibonacci(i));
    }
    printf("\n");
    /* int results = fibonacci(n); */
    /* printf("Fibonacci of %d is %d\n",n, results); */
}

int fibonacci(int n)
{
    if (n <= 1)
    {
	return n;
    }
    if (calculated[n] != -1)
    {
	return calculated[n];
    }
    calculated[n] = (fibonacci(n - 1) + fibonacci(n - 2));
    return calculated[n];
}
