#include <stdio.h>


int main(int argc, char *argv[])
{

  char *string[4];

  int i; 
  for (i = 1;i < argc; i++)
  {
    printf("%s\n",argv[i]);
    string[i]=argv[i];
  }

  printf("%s\n",string[argc-1]);
 
  for (i=1;i<argc-1;i++)
  {
    printf("%s\n",string[i]);
  }
  
  return 0;
}
