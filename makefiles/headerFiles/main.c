#include <stdio.h>
#include "header.h"

int squareRoot(int number);

int main(void)
{
    int number = 5;
    int root = squareRoot(number);
    printf("%d squared is %d\n", number, root);

}
