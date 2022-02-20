#include <stdio.h>
int tentimes(int *a)
{
    int c;
    int d;
    d = *a;
    c = 10 * d;
    return c;
}
int main()
{
    int a = 2;
    printf("The product is %d\n", tentimes(&a));

    return 0;
}