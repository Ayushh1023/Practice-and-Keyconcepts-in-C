#include <stdio.h>
int Strlen(char *str)
{
    char *ptr=str;
    int x = 0;
    while (*ptr != '\0')
    {
        ptr++;
        x++;
    }
    return x;
}
int main()
{ 
    char str[] = "Shashank";

    printf("The length of the above string is %d", Strlen(str));
    return 0; 
}


#include <stdio.h>
int main() {
    char s[] = "Programming is fun";
    int i;

    for (i = 0; s[i] != '\0'; i++);
    
    printf("Length of the string: %d", i);
    return 0;
}

// #include <stdio.h>
// int main() {
//     char *s = "Programming is fun";
//     int i;

//     for (i = 0; s[i] != '\0'; i++);
    
//     printf("Length of the string: %d", i);
//     return 0;
// }