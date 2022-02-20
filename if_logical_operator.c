#include <stdio.h>

int main()
{
    int age;
    int vipPass = 0;
    // vipPass = 1;
    printf("Enter the age::");
    scanf("%d", &age);
    if (age <= 70 && age >= 18 || vipPass == 1)
    {
        printf("you are above 18 and less than 70..you can drive");
    }
    else
    {
        printf("You cannot drive");
    }
    return 0;
}