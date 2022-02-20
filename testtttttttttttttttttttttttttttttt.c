#include <stdio.h>
int main()
{
    int arr[4][5];
    int i, j;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            arr[i][j]=10*i + j;
        }
    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("arr[%d][%d]--",i,j);
            printf("%d\n",arr[i][j]);
        }
    }
            printf("%d", *(arr[1] + 9));
            return 0;
}