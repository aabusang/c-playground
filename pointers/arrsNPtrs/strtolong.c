#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    char *string;
    char *end;
    long n;
    int i = 0, d = 0, max = 1;
    int len, base = 10;
    int *delete = malloc(sizeof(int)); 
    int *tmp;
    for (i = 1; i < argc; i++)
    {
	len = strlen(argv[i]);
	string = argv[i];
	if (argv[i][0] == 'd')
	{
	    if (d == max)
	    {
		tmp = realloc(delete, (max += d));
		delete = tmp;
		free(tmp);
	    }
	    n = strtol((string + 1), &end, base);
	    delete[d++] = n;
	}
    }

    for (i = 0; i < d; i++)
    {
	printf("%d\n", delete[i]);
    }

    free(delete);
}
