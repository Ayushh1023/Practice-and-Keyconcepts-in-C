#include <stdio.h>
int main()
{
    int arr[2][3][4];
    int x = 0;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 4; k++)
            {
                printf("The adrees of of arr[%d][%d][%d] is %u\n", i, j, k, &arr[i][j][k]);
                printf("The adrees of of arr[%d][%d][%d] is %u\n", i, j, k, &arr[i][j][k]);
                x++;
            }
        }
    }

    printf("%d", x);
    return 0;
}