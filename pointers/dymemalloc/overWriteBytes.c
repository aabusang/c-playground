#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    char *pc = malloc(sizeof(char) * 6);

    int i;
    for (i = 0; i < 8; i++)
    {
	pc[i] = 0;
	printf("%d ", pc[i]);
    }
    printf("\n");
}
