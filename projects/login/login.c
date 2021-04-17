#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include <stdbool.h>

bool login_success(char *username, char *email);

//if someone signup - add their name to a linked list
    //if someone signup - write their name to a membership file
//if someone sign in - record the time and date they signed in to a linked list
//if someone sign out - record the time and date

int main(void)
{
    char username[15], email[30];
    char password[15], choice = '\0';

    printf("Do you have an account? (y/n) ");
    scanf("%c", &choice);
    if (choice == 'y')
    {
        printf("Sign in below\nUsername: ");
        scanf("%s", username);
        printf("password: ");
        scanf("%s", email);

        if (login_success(username, email))
            printf("login success\n");
        else
            printf("Wrong username or password\n");
    }
    else if (choice == 'n')
    {
        printf("Sign up below\nUsername: ");
        scanf("%s", username);
        printf("Email: ");
        scanf("%s", email);
        printf("Password: ");
        scanf("%s", password);
    }
    else
    {
        printf("Invalid Choice\n");
    }
}


bool login_success(char *username, char *email)
{
    //will change it in the future to be if
    //login info in a database
    if (strcasecmp(username, "adam") == 0 && strcmp(email, "password") == 0)
    {
        return true;
    }
    return false;
}
