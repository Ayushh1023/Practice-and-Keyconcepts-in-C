#include <stdio.h>
int main()
{
    // int a=34;
    // int *ptr=&a;
    // printf("The value of ptr is::%u\n",ptr);
    // // ptr++;
    // ptr--;
    // printf("The value of ptr is::%u\n",ptr);

    char c = 34;
    char *ptr = &c;
    printf("The value of ptr is::%u\n", ptr);
    ptr++;
    // ptr--;
    printf("The value of ptr is::%u\n", ptr);

    return 0;
}