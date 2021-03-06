#include <stdio.h>
#include <string.h>

int main(void)
{
  char c[] = "Hello";
  char ca[] = {'H','e','l','l','o','\0'};
  char cb[] = {'H','e','l','l','o'};
  char cc[5] = {'H','e','l','l','o'};
  char *cd = "Hello";


  if (strcmp(c, ca) == 0)
    {
      printf("Same\n");
    }
  else
    {
      printf("Different\n");
    }
}
