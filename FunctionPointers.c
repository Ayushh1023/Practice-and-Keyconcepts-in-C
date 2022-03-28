//Pointers to functions
#include<stdio.h>
void say_hello(int num_times);  /* declaring function */
int main(){
    void (*funptr)(int);    /* pointer initialization */
    funptr = say_hello;     /* pointer assignment */
    funptr(3);              /* function call */
    return 0;
}

void say_hello(int num_times){
    int k;
    for(int k=0; k<num_times;k++)
    {
        printf("Hello\n");
    }
}