#include <stdio.h>
#include <string.h>


int main(void)
{
    int n = 10;
    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    
    for (int i = n - 1; i >= 0; i--)
    {
	if (i == 0)
	{
	    numbers[i] = 100;
	}
	else
	{
	    numbers[i] = numbers[i - 1];
	}
    }
    
    for (int j = 0; j < n; j++)
    {
	printf("%d ", numbers[j]);
    }
    
    printf("\n");
}