#include <stdio.h>
void ArrayRev(int *arr, int n)
{
    int temp;
    for (int i = 0; i < (n / 2); i++)
    {
        temp = arr[i];
        arr[i] = arr[(n - i - 1)];
        arr[(n - i - 1)] = temp;
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // int *ptr=arr;

    ArrayRev(arr, 10);

    for (int j = 0; j < 10; j++)
    {
        printf("%d, ", arr[j]);
    }

    return 0;
}