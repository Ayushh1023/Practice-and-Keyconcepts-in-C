#include <stdio.h>
// void printarray(int *ptr, int n)
void printarray(int ptr[], int n)
{
    // ptr[3]=233;
    for (int i = 0; i < n; i++)
    {
        // printf("The value of character %d is %d\n",(i+1),*(ptr+i));
        // printf("The value of character %d is %d\n",(i+1),*ptr);
        
         printf("The value of character %d is %d\n", (i + 1), ptr[i]);
        
        // ptr++;
    }
    ptr[3] = 233; // changes the original value in arr(main) due to dereferencing.
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    printarray(arr, 8);
    printf("Modified value of 4th element::%d\n", arr[3]);
    printarray(arr,8);
    return 0;
}