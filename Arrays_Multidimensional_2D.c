#include <stdio.h>
int main()
{
    int arr[3][5];
    // inputting the values in array
    for (int i = 0; i < 3; i++)
    {
        // printf("For row %d\n",i+1);
        for (int j = 0; j < 5; j++)
        {
            // printf("column %d\n",j+1);
            printf("Input the value (%d,%d) :: ", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");

    // displaying the values of array
    for (int i = 0; i < 3; i++)
    {

        for (int j = 0; j < 5; j++)
        {

            printf("The value of (%d,%d) is :: %d\n", i + 1, j + 1, arr[i][j]);
        }
    }
    return 0;
}