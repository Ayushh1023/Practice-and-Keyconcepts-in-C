#include <stdio.h>
#include <string.h>
void Encrypt(char *c)
{
    char *ptr = c;
    while (*ptr != '\0')
    {
        *ptr = *ptr + 1;
        ptr++;
    }
}
int main()
{
    char c[100];
    printf("Enter the message you want to encrypt::");
    gets(c);
    Encrypt(c);
    printf("The encrypted msg is %s", c);
    printf("\n");
    return 0;
}