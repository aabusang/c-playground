#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *pv = malloc(5 * sizeof(int));
    int i;
    for (i = 0; i < 5; i++)
    {
	pv[i] = i + 1;
	//*(pv + i) = i + 1;
    }
}
