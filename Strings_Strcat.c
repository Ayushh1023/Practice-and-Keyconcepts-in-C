#include<stdio.h>
#include<string.h>
int main(){
    char str1[]=" Shawshank";
    char *str2=" SHrey";
    //strcat(target,source)
    strcat(str1,str2);  //merges the source to the target
    printf("The contents of the str2 is %s", str1);
    return 0;
}