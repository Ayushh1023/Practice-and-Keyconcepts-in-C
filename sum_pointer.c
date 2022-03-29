#include <stdio.h>
int sum(int *a, int *b);
int main()
{
    int a = 3, b = 4;

    printf("The value of sum of a and b  is %d\n", sum(&a, &b));
    return 0;
}

int sum(int *a, int *b)
{
    int temp;
    temp = *a + *b;
}
