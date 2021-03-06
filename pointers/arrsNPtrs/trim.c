#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char  *trim(char *phrase);
int main(int argc, char *argv[])
{
    char *buffer = malloc(strlen("   cat") + 1);
    strcpy(buffer, "   cat");
    printf("%s\n", trim(buffer));
}

char *trim(char *phrase)
{
    char *old = phrase;
    char *new = phrase;


    while(*old == ' ')
    {
	old++;
    }

    while(*old)
    {
	*(new++) = *(old++);
    }
    *new = 0; //to terminate the new string

    return realloc(phrase, strlen(phrase) + 1);
}
/*
char *trimtrail(char *phrase)
{
    char *old = phrase;
    char *new = phrase;
    
    int last = strlen(old);
    while((*old += last--) == ' ')
    {
	old--;
    }
 
}
*/
