#include <stdio.h>
#include <string.h>
struct employee
{
    int code;
    float salary;
    char name[30];
};
void show(struct employee e1)
{
    printf("The code of the employee is %d\n", e1.code);
    printf("The salary of the employee is %f\n", e1.salary);
    printf("The name of the employee is %s\n", e1.name);
}
int main()
{
    struct employee e1;
    struct employee *ptr;
    ptr = &e1;
    ptr->code = 101;
    ptr->salary = 123.123;
    strcpy(ptr->name, "Shashank");
    show(e1);
    return 0;
}