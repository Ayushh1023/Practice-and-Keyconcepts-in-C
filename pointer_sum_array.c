#include<stdio.h>
int main(){
    int arr[5]={2,4,6,8,0};
    int *ptr;
    
    ptr=arr;
    int sum=0;
    
    for( int i=0;i<5;i++){
       sum=sum+*ptr;
        ptr++;
    }

    
    printf("%d\n",sum);
    return 0;
}