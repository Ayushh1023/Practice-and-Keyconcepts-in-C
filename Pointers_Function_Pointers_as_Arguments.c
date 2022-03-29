/*A function pointer used as an argument is sometimes referred to as a callback function
 because the receiving function "calls it back".*/
//The qsort() function in the stdlib.h header file uses this technique.

#include<stdio.h>
#include<stdlib.h>

int compare(const void *elem1, const void *elem2){
    if ((*(int*)elem1) == (*(int*)elem2))
    {
        return 0;
    }
    else if ((*(int*)elem1) < (*(int*)elem2)){
        return -1;
    }
    else{
        return 1;
    }
}
int main(){
    int arr[]={6,5,8,9,2,3};
    int num, width, i;

    num = sizeof(arr);
    width = sizeof(arr[0]);

    qsort((void*)arr, num, width, compare);
    for(int i=0;i<6;i++){
        printf("%d", arr[i]);
    }
    return 0;
}
