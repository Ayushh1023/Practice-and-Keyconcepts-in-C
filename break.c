#include<stdio.h>

int main(){
    for(int i=0;i<100;i++){
        printf("The number is %d\n",i);
        if(i==7){
            break;
        }
    }
    return 0;
}   