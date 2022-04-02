#include<stdio.h>
//MEMORY MANAGEMENT
//AS LONG AS IT IS DECLARED.....gets stored in STACK
//IF UNDECLARED...then Dynamic Memory Allocation comes in...concept of HEAPs
int main(){
    int x;
    printf("%d\n", sizeof(x));
    int y[10];
    printf("%d",sizeof(y));

    return 0;
}