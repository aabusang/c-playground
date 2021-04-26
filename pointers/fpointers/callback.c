#include <stdio.h>

void A()
{
    printf("Hello\n");
}
void B(void (*ptr)())
{
    ptr(); //This is the call-back function that ptr points to
}
int main(void)
{
    void (*p) = A;
    B(p);

    //or in short
    B(A);
}
