#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *pi = malloc(sizeof(int));
    *pi = 5;

    printf("*pi: %d\n", *pi);
    free(pi);
    /*p1 is freed, but it's location can still be accessed 
     *and that will cause a problem because it's now a dangling pointer*/

    /******************
     *int *pi;
     *...
     *{
     *int tmp = 5;
     *pi = &tmp
     *}
     *foo();
     *Now outside of the ending curly bracket, pi is a dangling pointer
     *this can be solved by freeing pi and setting it to null when it's use is over
     ***********************/
}
