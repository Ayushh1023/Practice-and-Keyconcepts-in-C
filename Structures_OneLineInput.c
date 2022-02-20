#include <stdio.h>
#include <string.h>
struct data
{
    int code;
    float salary;
    char name[20];
};
int main()
{
    struct data rohan = {100, 234.234, "rohan"};
    // struct data rohan = {0};
    printf("The code is %d ::\n", rohan.code);
    printf("The salary is %f ::\n", rohan.salary);
    printf("The name is %s ::\n", rohan.name);
    return 0;
}