#include<stdio.h>

int main(){
    int a;
    printf("Enter a number to check ");
    scanf("%d",&a);

    if (a%2==0){
        printf("Hence %d is even no.",a);
    }
    else{
        printf("Hence %d is odd no.",a);
    }
    return 0;
}