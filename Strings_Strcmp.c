#include<stdio.h>
#include<string.h>
int main(){
    char *str1=" Shawshank";
    char *str2=" Shrey";
    int value = strcmp(str1,str2);  
    printf("%d", value);
    return 0;
}