#include <stdio.h>
int main()
{
    int x = 2;
    float y = 3.45;
    char c = 'a';

    void *ptr;

    ptr = &x;
    printf("void ptr points to %d\n", *((int *)ptr)); // along with typecasting to the set data type

    ptr = &y;
    printf("void ptr points to %f\n", *((float *)ptr));

    ptr = &c;
    printf("void ptr points to %c\n", *((char *)ptr));

    return 0;
}