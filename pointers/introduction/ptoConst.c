#include <stdio.h>

int main(void)
{
    int num = 5;
    const int limit = 500;
    int *pi;
    const int *pci;
    
    pi = &num;
    pci = &limit;

    printf("num   - Address: %p  value: %d\n",&num, num);
    printf("limit - Address: %p  value: %d\n",&limit, limit);
    printf("pi    - Address: %p  value: %p\n",&pi, pi);
    printf("pci   - Address: %p  value: %p\n",&pci, pci);

    /*We can't dereference a constant pointer to change what it's pointing to*/
    
    
}
