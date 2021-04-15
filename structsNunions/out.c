#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Point
{
    int x;
    int y;
};

struct Point foo(struct Point *p1, struct Point p2)
{
    p1->x++;
    p2.x--;
    p2.y += p1->y;
    return p2;
}
int main(void)
{
    struct Point a = {1, 4};
    struct Point b = {2, 6};
    struct Point c = foo(&a, b);

    printf("c = (%d, %d)\n", c.x, c.y);
}
