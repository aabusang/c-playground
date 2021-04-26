#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *getLine();
int main(int argc, char *argv[])
{
    char *letters = getLine();
    int i;
    for (i = 0 ; i < strlen(letters); i++)
    {
	printf("%c", letters[i]);
    }
    printf("\n");
}

char *getLine()
{
    //size of initial buffer, size to increment by if need be
    const size_t sizeIncrement = 10;
     //a pointer to the characters read in
    char *buffer = malloc(sizeIncrement);
     // a pointer to next free position in the buffer
    char *currentPosition = buffer;
    //max number of characters can be safely stored in the buffer
    size_t maxLen = sizeIncrement; 
    size_t length = 1; //the number of characters read in
    int character; //the last character read in

    int offset;
    
    if (currentPosition == NULL) 
    {
	//if no space for a char to be read to, same for buffer
	return NULL;
    }

    while(1)
    {
	character = fgetc(stdin);
	if (character == EOF)
	{
	    break;
	}
	if (length++ > maxLen)
	{
	    //double the size of buffer
	    char *newBuffer = realloc(buffer, maxLen += sizeIncrement); 
	    if (newBuffer == NULL) //if no enought mem for new buffer
	    {
		free(buffer);
		return NULL;
	    }
	    offset = currentPosition - buffer;
	    currentPosition = newBuffer + (currentPosition - buffer);
	    buffer = newBuffer; // set buffer to newBuffer, newBuffer life ends
	}
	 //both buffer and currentPosition points to the same memory location
	*currentPosition++ = character;
    }
    
    printf("offset: %d\n", offset);
    return buffer;
}
