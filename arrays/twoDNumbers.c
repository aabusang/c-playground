#include <stdio.h>

void mdarray(int arr[3][3]);

int main(void)
{
    int numbers[3][3] = {
	{1, 2, 3},
	{4, 5, 6},
	{7, 8, 9}};
    for (int i = 0; i < 3; i++)
    {
	for (int j = 0; j < 3; j++)
	{
	    printf("%d ", numbers[i][j]);
	}
    }
    mdarray(numbers);
}

void mdarray(int arr[3][3])
{
    printf("\n");
    for (int i = 0; i < 3; i++)
    {
	for (int j = 0; j < 3; j++)
	{
	    printf("%d ", arr[i][j] + 11);
	}
    }
}
