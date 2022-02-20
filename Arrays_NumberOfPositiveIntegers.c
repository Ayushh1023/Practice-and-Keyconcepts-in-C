#include <stdio.h>
int main()
{
    int npos = 0, nneg = 0;
    int product;
    int arr[7];
    for (int i = 0; i < 7; i++)
    {
        printf("Enter the %d th element::", (i + 1));
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < 7; i++)
    {
        product = arr[i] * (-1);
        // printf("%d\n", product);
        if (product > 0)
        {
            nneg++;
        }
        else
        {
            npos++;
        }
    }

    printf("The number of negative and positive integers::%d and %d respectively\n", nneg, npos);
    return 0;
}