/*Aliasing is when two pointers refers to the same space in memory*/
#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int *p1 = malloc(sizeof(int));
    *p1 = 5;
    int *p2 = p1;

    free(p1);
    //free(p2);
    /*
     *Freeing same memory address twice will cause a runtime exception
    **/
}
