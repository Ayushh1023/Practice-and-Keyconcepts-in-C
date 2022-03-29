// in C we usually use call by value instead of call by reference
#include <stdio.h>
int sum(int x, int y);
int main()
{
    int x = 4, y = 7;
    printf("The value of x and y is %d and %d\n", x, y);
    printf("The sum of x and y is %d\n", sum(x, y));
    printf("The value of x and y after function call is %d and %d\n", x, y);
    return 0;
}

int sum(int x, int y)
{
    int c;
    c = x + y;
    x = 23456;
    y = 4567;
    //  c=x+y;
    return c;
}