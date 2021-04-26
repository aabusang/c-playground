#include <stdio.h>


int main(void)
{
    char *tabHeader = "Sound";
    printf("Before: %s\n", tabHeader);
    
    *tabHeader = 'l';
    printf("After: %s\n", tabHeader); //should display "Lound"

    //we can't assign the address of a string literal to an array name like the below
    //char header2[];
    //hearder2 = "Media player";
    //but we can do
    //char header2[] = "Media player";
}
