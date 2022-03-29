#include <stdio.h>
void printAdd(int i)
{
    printf("The address of i is %u\n", &i);
}
int main()
{
    int i = 4;
    printf("the value of i is %d\n", i);
    printAdd(i);
    printf("The adress of i is %u\n", &i);
    return 0;
}