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
    struct data e1;
    struct data *ptr;
    struct data *ptr2;
    ptr = &e1;
    (*ptr).code = 101;

    ptr2->code = 102; //you can set the value like this as well
    printf("The code of the employee is::%d\n", ptr2->code);
    printf("The code of the employee is::%d\n", ptr->code);
    printf("The code of the employee is::%d\n", (*ptr).code);
    printf("The code of the employee is::%d\n", e1.code);

    return 0;
}