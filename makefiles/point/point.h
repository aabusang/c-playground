#ifndef POINT_H
#define POINT_H

typedef struct
{
    int x;
    int y;
}point;

/* initialize and return a  pointer struct value */
point p_value(double x, double y);

/* print a representation of a point to stdout */
void print_point(point *point_to_self);

#endif
