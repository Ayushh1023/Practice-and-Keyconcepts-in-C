#include <stdio.h>
int large_sum(int *a, int *b, int n)
{
    int i, s1 = 0, s2 = 0;
    for (int i = 0; i < n; i++)
    {
        s1 += a[i];
        s2 += b[i];
    }
    printf("sum1=%d\tSum2=%d\n", s1, s2);
    if (s1 == s2)

    {
        return 0;
    }
    if (s1 > s2)
    {
        return 1;
    }
    if (s2 > s1)
    {
        return 2;
    }
}
int main()
{
    int arr1[5], arr2[8], num, g;
    printf("Enter 5 elements for 1st array:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the %d element of array:\t", i + 1);
        scanf("%d", &arr1[i]);
    }
    printf("Enter 8 elements for 1st array:\n");
    for (int i = 0; i < 8; i++)
    {
        printf("Enter the %d element of array:\t", i + 1);
        scanf("%d", &arr2[i]);
    }
    printf("Enter the number of elements you want sum of(less than 5):\t");
    scanf("%d", &num);
    g = large_sum(arr1, arr2, num);
    if (g == 0)
    {
        printf("Both the sums are equal\n");
    }
    else if (g == 1)
    {
        printf("Sum of 1st array is greater than 2nd\n");
    }
    else
    {
        printf("Sum of 2nd array is greater than 1st\n");
    }
    return 0;
}