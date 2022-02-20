#include<stdio.h>
#include<string.h>
int main(){
    char str1[30];
    char str2[30];
    char c;
    int i=0;
    printf("Enter the str1\n");
    scanf("%s", &str1);
    printf("Enter the str2\n"); 

    while(c!='\n'){
        fflush(stdin);
        scanf("%c",&c);
        str2[i]=c;
        i++;
    }
    // str2[i]='\0'; // inserts extra character "\n"--space..hence not same
    str2[i-1]='\0'; // replacing the space with null character
    
    printf("The str1 is :: %s\n", str1);
    printf("The str2 is :: %s\n", str2);
    printf("The difference is %d\n", strcmp(str1,str2));
    return 0;
}