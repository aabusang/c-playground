#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char *username;
    char *password;
    struct Node *next;
};

int main(void)
{
    node *head = NULL;
    node *person = malloc(sizeof(node));
    if (person == NULL)
    {
	printf("No more space for another person\n");
	return 1;
    }
    head = person;

    print("Usename: ");
    scanf("", 
}
