#include <stdio.h>
#include <string.h>
int main()
{
    char *str1 = "shawshank";
    char *str2;
    // strcpy(target,source)
    strcpy(str2, str1); // copies the contents of source to target
    printf("The contents of the str2 is %s", str2);
    return 0;
}