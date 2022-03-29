#include <stdio.h>
int main()
{
    char str[] = "Shashank";
    int i;
    for (i = 0; str[i] != '\0'; i++)
        ;

    printf("The length of string is %d\n", i);
    return 0;
}