#include<stdio.h>
#include<math.h>
int main(){
    int side;
    // int area;
    printf("Enter the side of the square::");
    scanf("%d",&side); 
    // area=pow(side,2);   //always remember pow() function returns DOUBLE value so use float.
    printf("The area of the given square of side %d is::%f\n",side,pow(side,2));
    return 0;
}