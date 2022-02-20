#include<stdio.h>
int factorial(int x);
int main(){
    int a; 
    printf("Enter the number(for factorial)::");
    scanf("%d",&a);
    printf("The factorial of %d is %d\n",a,factorial(a));
    return 0;
} 

int factorial(int x){
    printf("calculating factorial %d\n",x); 
    if(x==1 || x==0){
        return 1;
    }
    if(0){}
    else{
        return x*factorial(x-1);
    }
}