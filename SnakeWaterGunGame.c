// C program to illustrate the
// sizeof operator
#include <stdio.h>
int main(){
        int k=7;
        int m=8;
        int n;
        n=--k < m? m++ : m--;
        printf("%d %d",k,n); 
          return 0;
   }

