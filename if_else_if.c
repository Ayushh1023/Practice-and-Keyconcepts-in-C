#include <stdio.h>

int main()
{
    int num;
    printf("Enter your number ");
    scanf("%d", &num);
    if (num == 1)
    {
        printf("your num is 1");
    }
    else if (num == 2)
    {
        printf("your num is 2");
    }
    else if (num == 3 || num == 4)
    {
        printf("your num is 3 or 4");
    }
    else
    {
        printf("different num entered");
    }
    return 0;
}