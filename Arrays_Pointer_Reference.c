#include <stdio.h>
int main()
{
    int marks[4];
    int *ptr;

    // int *ptr=&marks[0];
    // int *ptr=marks;

    // int *ptr;
    // ptr=&marks[0];
    ptr = marks;
    int sum = 0;

    for (int i = 0; i < 4; i++)
    {
        printf("The value of student%d::", i + 1);
        scanf("%d", ptr);
        ptr++;
    }

    // for( int i=0;i<4;i++){
    //     printf("The value of %d th student is :: %d\n",i+1,marks[i]);

    // }

    // ---------------using the pointer to print the values-------------

    for (int i = 4; i > 0; i--)
    {
        printf(" %d\n", *(ptr - i));
    }

    return 0;
}