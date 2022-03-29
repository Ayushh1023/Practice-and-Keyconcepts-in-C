#include <stdio.h>
int main()
{
    int i = 420;
    int *ptr;
    int **ptr_ptr;
    ptr = &i;
    ptr_ptr = &ptr;
    printf("The value of integer variable is::%d\n", **ptr_ptr);
    return 0;
}