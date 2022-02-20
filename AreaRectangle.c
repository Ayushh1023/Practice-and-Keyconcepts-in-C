#include <stdio.h>

int main()
{
    int length, breadth;
    int Area;
    printf("Enter length ");
    scanf("%d", &length);

    printf("Enter the breadth ");
    scanf("%d", &breadth);
    Area = length * breadth;

    printf("The Area of Rectangle is %d", Area);
    return 0;
}