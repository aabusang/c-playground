#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    char line[255];
    char *filename = argv[1];
    
    FILE *file = fopen(filename, "r");
    if (!file)
    {
	printf("File could not be read in\n");
	return 1;
    }

    int len;
    while(fgets(line, 255, file))
    {
	len = strlen(line);
	printf("Line: %s", line);
    }
    
    
    fclose(file);
    return 0;
}
