#include <stdio.h>


int add(int a, int b);

int main(void)
{
    int c;
    int (*fptr)(int, int);
    fptr = add; /* or (*fptr) = &add), either one will work */
    c = fptr(2, 3); /* Derefferencing and executing the function */
    printf("Sum: %d\n", c);
}


int add(int a, int b)
{
    return a + b;
}
