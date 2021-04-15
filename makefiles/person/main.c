#include <stdio.h>

#include "functions.h"

int main(void)
{
    /* use function */
    printf("Function: %d\n", add(2, 6));

    /* use macro */
    printf("Macro: %d\n", (ADD(2, 6)));

    /* use typedef */
    person adam;
    adam.age = 19;
    printf("Adam's age is %d\n", adam.age);
}

