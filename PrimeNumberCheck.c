#include <stdio.h>

int main()
{
    int i;
    int num;
    int prime = 1;
    printf("Enter the num for which you want to find if it's prime or not::");
    scanf("%d", &num);
    for (i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            prime = 0;
        }
    }
    if (prime == 0)
    {
        printf("The number is not prime\n");
    }
    else if (prime == 1)
    {
        printf("The number is prime\n");
    }

    return 0;
}