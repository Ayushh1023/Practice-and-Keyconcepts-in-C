#include <stdio.h>
typedef struct complex
{
    int real;
    int complex;
} comp;
int main()
{
    comp cnum[3];
    for (int i = 0; i < 3; i++)
    {
        printf("\n");
        printf("Enter the real part    of complex number %d::", i + 1);
        scanf("%d", &cnum[i].real);
        printf("Enter the complex part of complex number %d::", i + 1);
        scanf("%d", &cnum[i].complex);
        printf("\n");
    }

    printf("\n");
    printf("\n");
    printf("\n");

    for (int i = 0; i < 3; i++)
    {
        printf("The complex numbers are %d+%di \n", cnum[i].real, cnum[i].complex);
        printf("\n");
    }
    return 0;
}