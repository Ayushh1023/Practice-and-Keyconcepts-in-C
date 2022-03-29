#include <stdio.h>
float area(float a);
int main()
{
    float side;
    float Area;
    printf("Tell the side of the square::");
    scanf("%f", &side);
    Area = area(side);
    printf("The area of the given square of side is %f", Area);
    return 0;
}

// float area(float a){
//     float Area;
//     Area=a*a;
//     return Area;
// }

// or you could use...............

float area(float a)
{
    return (a * a);
}