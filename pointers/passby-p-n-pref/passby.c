/* This program needs debugging 

 *This program demostrate the idea of passing a copy of a pointer 
 *to a function that can't affect the original pointer and it's value and
 * passing a pointer to function can affect the original pointer and it's value 
 *******************************************************************************/

#include <stdio.h>

int box1 = 1;
int box2 = 2;
int *gptr = NULL;

void passByPtr(int *ptr);
void passByPtrRef(int **ptrRef);

int main(void)
{
    int *p = &box1;
    gptr = &box2;

    printf("___________Current conditions______________\n");

    passByPtr(p);
    /* passByPtrRef(p); */

    /* p pointer */
    if (p == &box1)
	printf("p is pointing to box1");
    else if (p == &box2)
	printf("p is pointing to box2\n");
    else
	printf("p is pointing to some other box\n");
    
    /* gptr pointer */
    if (gptr == &box1)
	printf("gptr is pointing to box1\n");
    else if (gptr == &box2)
	printf("gptr is pointing to box2\n");
    else
	printf("gptr is pointing to some other box\n");

    printf("box1 contains the value %d\n", box1);
    printf("box2 containt the value %d\n", box2);
}

void passByPtr(int *ptr)
{
    *ptr  = 3;
    ptr = gptr;
    *ptr = 5;
    printf("____________passByPtr has been called_______________\n");
}
void passByPtrRef(int **ptrRef)
{
    *ptrRef = 5;
    ptrRef = gptr;
    *ptrRef = 6;
    printf("___________passByPtrRef has been called______________\n");
}
