// #include <stdio.h>
// #include <string.h>
// int Occur(char str, char src)
// {
//     // char *ptr = str;
//     int x=0;
//     while (str!='\0')
//     {
//         if (str == src)
//         {
//             x++;
//         }

//         str++;
//     }
//     return x;
// }
// int main()
// {
//     char str[] = "shashank";
//     int j = Occur(str, 'a');
//     printf("The no. of occurence of is %d\n", j);

//     return 0;
// }
    
//    #include<stdio.h>
//    int main(){
//        int x=0;
//        char str[100];
//        char *ptr=str;
//        gets(str);
//        char c='7';
      
//        while(*ptr!='\0'){
//            if(*ptr==c){
//                x++;
//            }
//            ptr++;
//        }

//        printf("%d",x);

//        return 0;
//    }

#include <stdio.h>
int occur(char str, char src)
{
    int x=0;
    while (str!='\0')
    {
        if (str == src)
        {
            x++;
        }

        str++;
    }
    return x;
}

int main() {
    char str[] = "shashank";

    char src;
    printf("Please enter the character to be counted:_");
    scanf("%c", &src);

    int j = occur(str, src);
    printf("The no. of occurence of %c is %d\n", src, j);

    return 0;
}