#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char *charArray;
    char *buffer;
    char line[255];
    size_t incBy = 4;
    size_t maxSize = incBy;
    
    charArray = malloc(maxSize * sizeof(char *));

    while(fgets(line, 255, stdin) != NULL)
    {
	
    }
    
}
