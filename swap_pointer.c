#include <stdio.h>
void swap(int *a, int *b);
int main()
{
    int a, b;
    scanf("%d %d\n", &a, &b);
    printf("The value of a and b before swap is %d and %d\n", a, b);
    swap(&a, &b);
    printf("The value of a and b after  swap is %d and %d\n", a, b);
    return 0;
}

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}