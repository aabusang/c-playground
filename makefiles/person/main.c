#include <stdio.h>

#include "header.h"

int main(void)
{
    /* use function */
    printf("Function: (2 + 6) = %d\n", add(2, 6));

    /* use typedef */
    person adam;
    adam.age = 19;
    printf("Adam's age is %d\n", adam.age);
}

