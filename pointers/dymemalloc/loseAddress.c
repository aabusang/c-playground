#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    int *pi = malloc(sizeof(int));
    *pi = 5;
    printf("%d\n", *pi);
    pi = malloc(sizeof(int)); //first malloc has been lost cuz it's not been freed but pi is mallocing a gain
    //printf("%d\n", *pi); = 0
/*
    char *name = malloc(strlen("Susan") + 1);
    strcpy(name, "Susan");
    while(*name != 0)
    {
	printf("%c ", *name);
	name++; //name pointer is being incremented
    }
    printf("\n");    
*/
}
