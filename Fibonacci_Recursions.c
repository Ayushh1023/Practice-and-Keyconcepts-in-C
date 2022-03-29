#include <stdio.h>
int fibonacci(int x);
int main()
{
    int a;
    printf("Enter the no. of terms you want::");
    scanf("%d", &a);
    printf("The fibonacci no. is %d", fibonacci(a));
    return 0;
}

int fibonacci(int x)
{
    printf("the fibonacci no. for %d\n", x);
    if (x == 1)
    {
        return 1;
    }
    else if (x == 2)
    {
        return 1;
    }
    else
    {
        return fibonacci(x - 1) + fibonacci(x - 2);
    }
}