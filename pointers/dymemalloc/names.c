#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    char *names1[] = {"Timothy", "Adam", "Junior", "Warris"};
    char **names2[2];
    int i;

    printf("Names 1\n");
    for (i = 0; i < 4; i++)
    {
	printf("%d: %s\n", i, names1[i]);
	names2[i] = &names1[i];
    }
    printf("\n%lu, %lu, %lu\n", sizeof(char*), sizeof(names2), sizeof(names1));
    printf("\nNames 2\n");
    for (i = 0; i < 4; i++)
    {
	printf("%d: %s\n", i, *names2[i]);
    }
}
