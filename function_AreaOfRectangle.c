#include<stdio.h>
int area(int a, int b);
int main(){
    int a,b;
    int c;
    printf("Input the dimensions of the rectangle:-\n");
    scanf("%d %d",&a,&b);
    c=area(a,b);
    printf("The area of the rectangle is %d\n",c);
    return 0;
}

int area(int a,int b){
    int result;
    result=a*b;
    return result;
}