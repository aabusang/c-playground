#include <stdio.h>

int main(void)
{
    char name[15];
    char email[30];
    char password[15];

    int choice = 0;

    printf("Enter 1 for sign in 2 for sign up: ");
    scanf("%d", &choice);
    if (choice == 1)
    {
        printf("Sign in below\n");
        printf("Name: ");
        printf("Hello %s\n", name);
    }
    else
    {
        printf("Invalid Choice\n");
    }
}