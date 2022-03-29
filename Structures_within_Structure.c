#include <stdio.h>
typedef struct
{
    int x;
    int y;
} point;

typedef struct
{
    float radius;
    point centre;
} circle;
int main()
{

    circle c = {5, {12, 10}};
    printf("%.1f,%d,%d", c.radius, c.centre.x, c.centre.y);
    return 0;
}