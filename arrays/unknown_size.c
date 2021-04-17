#include <stdio.h>
#include <stdlib.h>

int **arr;   //2D array of characters - global
int N  = 4; // - global

void assign();
void printints();

int main(void){
    arr = malloc(sizeof(int*) * N);

    for(int i = 0; i < N; i++) // Iterate over correct dimension
	arr[i]= (int*)malloc(N);

    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
	{
            *(*(arr+i)+j) = 0; // Set data or whatever
	    printf("%d ", *(*(arr+i)+j)); 
	}
	printf("\n");
    }
    /* assign(); */
    /* printints(); */
    return 0;
}


void assign()
{
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
	{
            *(*(arr+i)+j) = 0; // Set data or whatever
	}
    }
}

void printints()
{
     for(int i = 0; i < N; i++)
     {
	 for(int j = 0; j < N; j++)
	{
	    printf("%d ", *(*(arr+i)+j)); 
        }
        printf("\n");
    }
}
