#include <stdio.h>
float force(float a);
int main()
{
    float mass;
    printf("Enter the mass of the object(in kg(s))\n");
    scanf("%f", &mass);
    printf("The force exerted by the mass due to gravity is %.2f Newton(s)", force(mass));
    return 0;
}

float force(float a)
{
    return a * 9.8;
}