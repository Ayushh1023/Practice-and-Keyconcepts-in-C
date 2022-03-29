#include <stdio.h>
char main()
{
    // char str[]={'S','h','a','s','h','a','n','k','\0'};
    // char str[]={'S','h','a','s','h','a','n','k'}; //if we don't put \0 in the end

    char str[] = "Shashank";
    char *ptr;
    // char *ptr=&str[0];
    // char *ptr=str;

    // ptr=str;
    ptr = &str[0];
    while (*ptr != '\0')
    {
        printf("%c", *ptr);
        ptr++;
    }
    return 0;
}
