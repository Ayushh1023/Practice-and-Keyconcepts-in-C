#include <stdio.h>

struct employee
{
    int code;
    float salary;
    char name[30];
};
int main()
{
    struct employee meta[10];
    char ch;
    int i = 0;
    do
    {
        printf("Enter the code of employee %d:: ", i + 1);
        scanf("%d", &meta[i].code);
        printf("\n");
        printf("Enter the salary of employee %d:: ", i + 1);
        scanf("%f", &meta[i].salary);
        printf("\n");
        printf("Enter the name of the employee %d::", i + 1);
        scanf("%s", meta[i].name);
        printf("\n");
        i++;
        printf("You wanna continue?? (y/n)   ");
        scanf(" %c", &ch);
        printf("\n");

    } while (ch == 'y' || ch == 'Y');

    for (int j = 0; j < i; j++)
    {
        printf("Enter the code of employee %d is :: %d\n", j + 1, meta[j].code);
        printf("Enter the salary of employee %d is :: %.2f\n", j + 1, meta[j].salary);
        printf("Enter the name of the employee %d is :: %s\n", j + 1, meta[j].name);
        printf("\n");
    }
    return 0;
}