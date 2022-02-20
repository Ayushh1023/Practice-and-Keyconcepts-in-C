#include<stdio.h>

float average(float a, float b, float c);
int main(){
    float a,b,c;
    printf("Enter a and b and c (with spaces):-\n");
    scanf("%f %f %f",&a,&b,&c);
    printf("The average of numbers are %f\n",average(a,b,c));

    return 0;
}

float average(float a,float b, float c){
    float avg;
    avg=(a+b+c)/3;
    return avg;
}

