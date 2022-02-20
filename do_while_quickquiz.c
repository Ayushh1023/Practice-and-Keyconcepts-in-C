#include<stdio.h>

int main(){
    int n;
    printf("Till where you want natural no.s\n");
    scanf("%d",&n);
    int i=0;
    do{
        
        printf("The number is %d\n",i+1);
        i++;

    }while(i<n);
    return 0;
}