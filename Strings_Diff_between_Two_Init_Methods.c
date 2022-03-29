#include <stdio.h>
int main()
{
    char *ptr = "Hello Shashank"; // method 1==declaring pointer-correct
    // char ptr[]="Hello Shashank";        //method 2==No pointer declaration
    ptr = "Hello Ayush";
    printf("%s", ptr);
    return 0;
}