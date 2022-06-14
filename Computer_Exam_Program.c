#include <stdio.h>
int fibonacci(int x)
{
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
int main()
{
    int a;
    int arr[11];
    int *ptr = &arr[0];
    int roll;
    printf("Enter your roll number:: ");
    scanf("%d", &roll);
    printf("Enter the no. of terms you want::");
    scanf("%d", &a);
    printf("The fibonacci no. is %d\n", fibonacci(a));
    int m;
    int n;
    int i;
    int j;
    int sum = 0;
    m = (roll % 10) + 1;
    n = (roll % 10) + 10;
    printf("The value of m is %d\n", m);
    printf("The value of n is %d\n", n);

    printf("The mth fibonacci is :: %d\n", fibonacci(m));
    printf("The nth fibonacci is :: %d\n", fibonacci(n));

    for (i = 6; i <= 15; i++)
    {
        *ptr = fibonacci(i);
        ptr++;
    }

    for (j = 0; j < 10; j++)
    {
        printf("The array elements are::%d\n", arr[j]);
        sum = sum + arr[j];
    }
    printf("The sum of the above elements is :::::: %d", sum);
    return 0;
}