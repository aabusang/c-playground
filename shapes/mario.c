#include <stdio.h>

int main(void)
{
  int height;
  do
    {
      printf("Height: ");
      scanf("%d", &height);
    }while(height < 0 || height > 8);

  int i, j;
  for (i = 0; i < 8; i++)
    {
      for (j = 0; j < i + 1; j++)
	{
	   printf("*");
	}
        printf("\n");
    }


 
}
