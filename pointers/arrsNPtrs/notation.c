#include <stdio.h>

int main(void)
{
    int vector[] = {1, 2, 3, 4, 5};
    int *pv = vector;

    int value = 3, i;
   
    for (i = 0; i < 5; i++)
    {
	*pv++ *= value;
	/*printf("%d\n", *pv++ );*/
	printf("%d\n", vector[i]);
    }
    
}
