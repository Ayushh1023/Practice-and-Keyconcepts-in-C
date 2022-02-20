#include <stdio.h>
#include <string.h>
struct employee
{
    int code;
    float salary;
    char name[30];
};
int main()
{
    struct employee e1, e2, e3;
    printf("\n"); 
    printf("\n");

    printf("Enter the code of the employee1::");
    scanf("%d", &e1.code);
    printf("Enter the salary of the employee1::");
    scanf("%f", &e1.salary);
    printf("Enter the name of the employee1::");
    scanf("%s", e1.name);
    printf("\n");
    printf("\n");

    printf("Enter the code of the employee2::");
    scanf("%d", &e2.code);
    printf("Enter the salary of the employee2::");
    scanf("%f", &e2.salary);
    printf("Enter the name of the 3mployee2::");
    scanf("%s", e2.name);
    printf("\n");
    printf("\n");

    printf("Enter the code of the employee3::");
    scanf("%d", &e3.code);
    printf("Enter the salary of the employee3::");
    scanf("%f", &e3.salary);
    printf("Enter the name of the employee3::");
    scanf("%s", e3.name);
    printf("\n");
    printf("\n");

    return 0;
}