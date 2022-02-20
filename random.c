#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int num;
    srand(time(0));
    for(int i=0;i<5;i++){
        num=rand()%100+1;
        printf("the number is %d\n",num);
    }
    return 0;
}