#include<stdio.h>
#include<string.h>
void slice(char *st, int a, int b)
{
    char *ptr=st;
    char slicest[100];
    int j=0;
    
    for(int i=a;i<=b;i++)
    {
        slicest[j]=ptr[i];
        j++;
    }
    slicest[j]='\0';
    printf("The sliced string is %s", slicest);
}
int main(){
    char st[]="ShashankandShreyazamn";
    slice(st,2,8);
    return 0;
}