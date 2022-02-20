#include<stdio.h>

int main(){
    float P,r,t;
    float interest;
    
    printf("Enter the P r t in the following order (with spaces)\n");
    scanf("%f %f %f",&P,&r,&t);

    interest=P*r*t/100;
    printf("The interest would be %f",interest);

    
    
 return 0;
}