#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *numbers = malloc(sizeof(int));
    
    int i;
    for (i = 0; i < 7; i++)
    {
	numbers[i] = i * 3;
    }
    for (i = 0; i < 7; i++)
    {
	printf("%d\n", numbers[i]);
    }
}
