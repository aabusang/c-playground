/*To demostrate how a program can run out of memory*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char *chunk;
    while(1)
    {
	chunk = malloc(10000);
	printf("Allocating\n");
    }
}
