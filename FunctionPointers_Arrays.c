#include <stdio.h>
int sum(int num1, int num2)
{
    return num1 + num2;
}
int subtract(int num1, int num2)
{
    return num1 - num2;
}
int multiply(int num1, int num2)
{
    return num1 * num2;
}
int div(int num1, int num2)
{
    return num1 / num2;
}

int main()
{
    int a, b, choice, result;
    int (*op[4])(int, int);
    op[0] = sum;
    op[1] = subtract;
    op[2] = multiply;
    op[3] = div;

    printf("Enter first number:");
    scanf("%d", &a);
    printf("Enter second number:");
    scanf("%d", &b);
    printf("Please select a choice \n'0' for addition \n'1' for subtraction \n'2' for multiply\n'3' for division");
    scanf("%d", &choice);
    printf("\n");
    printf("\n");

    result = op[choice](a, b);
    printf("%d", result);

    return 0;
}
