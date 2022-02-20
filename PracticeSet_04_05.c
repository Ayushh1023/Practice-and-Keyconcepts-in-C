#include<stdio.h>

int main(){
    int num;
    int i=0;
    printf("Till which no. you want to find the sum::");
    scanf("%d",&num);
    int sum=0;
    while(i<=num){
        sum+=i;
        i++;
    }
    printf("The sum of all the natural no.s is %d\n",sum);
    return 0;
}