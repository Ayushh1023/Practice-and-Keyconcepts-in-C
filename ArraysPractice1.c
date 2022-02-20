#include<stdio.h>
int main(){
    int arr[4];
    int *ptr=arr; //the pointer is set to index 0
    for(int i=0;i<4;i++)
    {
        printf("Enter the element no. %d::", (i+1));
        scanf("%d",ptr);
        ptr++;
    }
  
    /*after exiting this loop the index of ptr is set to 4..
    so in order to print the 3rd element of the array we have..
    to trace back the value of the ptr by 2 (subtracting it by 2)*/

    // ptr=ptr-2;
    // if (ptr==&arr[2]){
    //     printf("f**kin' true");
    // }

    printf("The value of ptr+2 will be %d\n", *(ptr-2));
    return 0; 

}