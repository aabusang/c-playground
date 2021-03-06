#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char *string1;
    char *string2;
    
    string1 = malloc(16);
    strcpy(string1, "0123456789AB");
/**************************
 *although < 16, string2 will still hold all the chars in string1
 *but this is not good practice to use more memory than allocated
*****************/
    string2 = realloc(string1, 8); 
/*or we can allocated more that need memory and the 
 *string2 can probaby now have a diferent address or 
 *same if there is more memory on that part of the heap*/
    string2 = realloc(string1, 64);
    
    printf("string1 value: %p [%s]\n", string1, string1);
    printf("string2 value: %p [%s]\n", string2, string2);
}
