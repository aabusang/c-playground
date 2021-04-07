#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    char **arr1 = malloc(sizeof(char **));
    int i, max = 1, inc = 1;
    for (i = 0; i < argc; i++)
    {
	char **arr2 = realloc(arr1, max += inc);

	strcpy(arr2[i], argv[i]);
	arr1 = arr2;
    }

    for (i = 0; i < argc; i++)
    {
	printf("%s\n", arr1[i]);
    }
}
