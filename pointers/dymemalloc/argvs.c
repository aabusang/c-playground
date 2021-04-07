#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int i = 0;
    char **names[1];
    while (i < argc)
    {
	printf("%s\n", argv[i]);
	names[i] = malloc(10 * sizeof(char));
	names[i] = &argv[i];
	i++;
    }

    for (i = 0; i < argc; i++)
    {
	printf("%s\n", *names[i]);
    }
}
