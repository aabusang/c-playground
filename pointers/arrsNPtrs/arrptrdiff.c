#include <stdio.h>


int main(void)
{
    int vector[] = {1, 2, 3, 4, 5};
    int *pv = vector;

    /*the data can be retrieved using either 
     *pv or vector but the size of pv is a size 
     *of a pointer while the size of  vector is 20 or 5 ints * 4bytes
     *see below
     ****************/
    printf("size of pv: %lu\n", sizeof(pv));
    printf("size of vector: %lu\n", sizeof(vector));

    /***************
     *Notation vector[i]: Generate machines code that starts at location vector and moves i from this position and use it's content
     *Notation vector +1: Generates machine code that starts at location vector, adds it to the address and use it's content
     *Very settle difference
     ***************/

    /**************
     *Also an address assigned to an array cannot be change
     *But an address assigned to a pointer can be changed
     *See below
     **************/

    pv = pv + 1; //valid statement
    vector = vector + 1 //invalid syntax
    
}


