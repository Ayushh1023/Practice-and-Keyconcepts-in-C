#include <stdio.h>

int main()
{
    int i;
    int num = 7;
    int fac = 1;
    for (i = 1; i <= num; i++)
    {
        fac *= i;
    }
    printf("The factorial of the num is %d", fac);
    return 0;
}