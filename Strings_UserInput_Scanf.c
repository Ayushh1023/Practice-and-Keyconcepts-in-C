#include <stdio.h>
int main()
{
    char st[34];
    printf("Enter your name::");
    scanf("%s", st); // only single word strings can be printed using scanf
    printf("The name is %s", st);
    return 0;
}