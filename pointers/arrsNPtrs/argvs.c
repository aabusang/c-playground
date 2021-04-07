#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>

int main(int argc, char *argv[])
{
    int sizeIncrement = 2; 
    char **delete = malloc(sizeIncrement * sizeof(char **));
    char **currentDel = delete;
    int delMaxLen = 1,numOfDelArgvs = 0;
    int i = 0, d = 0, slen = 0, offset;

    char first, mid , last;

    while(i < argc)
    {
	first = argv[i][0];
	mid = argv[i][1];
	slen = strlen(argv[i]);
	last = argv[i][slen - 1];
	
	if (isalpha(first) && isdigit(last))
	{
	    /* if overflow, realloc for new del */
	    
	    if (numOfDelArgvs++ > delMaxLen)
	    {
		char **newDelete = realloc(delete, delMaxLen += sizeIncrement);
		if (newDelete == NULL)
		{
		    free(delete);
		    delete = NULL;
		}
		/*set current del offs set */
		/* offset = currentDel - delete; */
		/* printf("offset: %d\n", offset); */
		currentDel = newDelete;// + (currentDel - delete);
		/*set buf to newbuffer */
		delete = newDelete;
	    }
	    currentDel[d++] = argv[i];
	}
	i++;
    }


    while(*delete)
    {
	printf("%s\n", *delete);
	delete++;
    }

    /* free(*delete); */
}
