#include <stdio.h>
int main()
{
    int i = 34;
    int *j = &i; // j will now store the address of i
    printf("The value of i is %d\n", i);
    printf("The value of i is %d\n", *j);
    // printf("The value is %u\n",*(&j));

    printf("The address of i is %u\n", j);  // address of i will be the output
    printf("The address of i is %u\n", &i); // address of i will be the output

    printf("The address of j is %u\n", &j); // Address of a variable which itself is storing an address
    printf("The value of j is %u\n", *(&j));
    return 0;
}