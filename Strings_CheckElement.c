#include<stdio.h>
void elecheck(char *str, char c){
    printf("******************Checking.......................\n");
    printf("\n");
    printf("\n");

    while(*str!='\0'){
        if(c==*str){
            printf("---------------I'm here!!!\n");
        }
        else{
            printf("Doesn't match\n");
        }
        str++;
    }
    printf("\n");
    printf("\n");
    printf("*******************Check Completed******************\n");

}
int main(){
    char str[]="shashank";
    char ele;
    printf("Enter the element you want to find in the string::");
    scanf("%c",&ele);
    
    elecheck(str,ele);
    return 0;
}