#include <stdio.h>
void display(); // function prototype
int main()
{
    int a;
    printf("function initializing\n");
    display(); // function gets called
    printf("Function called finished");
    return 0;
}
// function definition
void display()
{
    printf("This is display\n");
}