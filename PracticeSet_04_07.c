#include <stdio.h>

int main()
{
    int num = 8;
    int i;
    int sum;
    for (i = 1; i <= 10; i++)
    {
        sum = sum + (8 * i);
    }
    printf("The sum of the the values in table is ::%d", sum);

    return 0;
}