#include <stdio.h>
#include <string.h>
int main()
{
    // char str[]= "Shreya Shashank";
    char *str = "Shreya Shashank";
    int a = strlen(str);
    printf("The length of the string is::%d", a);
    return 0;
}