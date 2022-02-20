#include <stdio.h>
int occur(char *str, char src)
{
    int x = 0;
    while (*str != '\0')
    {
        if (*str == src)
        {
            x++;
        }

        str++;
    }
    return x;
}

int main()
{
    char str[] = "shashank";

    char src;
    printf("Please enter the character to be counted:_");
    scanf("%c", &src);

    int j = occur(str, src);
    printf("The no. of occurence of %c is %d\n", src, j);

    return 0;
}