#include<stdio.h> 
int main()
{
    int marks;
    printf("Enter Your Marks.\n");
    scanf("%d", &marks);
    switch(marks)
    {
    if (marks >= 90)
        printf("Your grades are A");
        break;
    if (marks >= 80)
        printf("Your grades are B");
        break;
    if (marks >= 70)
        printf("Your grades are C");
        break;
    if (marks >= 60)
        printf("Your grades are D");
        break;
    if (marks >= 50)
        printf("Your grades are E");
        break;
    if (marks <= 40)
        printf("Your are Fail");
        break;
    default:
        printf("Invaild Marks!");
        break;
    }
    return 0;
}