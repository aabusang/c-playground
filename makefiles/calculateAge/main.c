#include <stdio.h>

#include "age.h"

int main(void)
{
    int year;
    printf("What year were you born? ");
    scanf("%d", &year);
    printf("\nYour are %u year old\n", calcAge(year));
}
