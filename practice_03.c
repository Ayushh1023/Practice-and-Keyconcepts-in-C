// ALL PROBLEMS OF CHAPTER 3 PRACTICE SET
#include <stdio.h>

int main()
{
    // -----------------------------------------------FIRST PROBLEM(IF ELSE ANALOGY)---------------------------------------------------
    // int a=10;
    // if(a=11){
    //     printf("a is 11\n");
    // }
    // else{
    //     printf("a is not 11\n");
    // }
    // ------------------------------------------------SECOND PROBLEM(TESTPERCENTAGE)-------------------------------------------------------------------------
    // int a,b,c;
    // int sum;
    // float totalpercentage;
    // float subjectpercentage;
    // printf("Enter the marks of each subject with spaces (out of 100)\n");
    // scanf("%d %d %d",&a,&b,&c);
    // totalpercentage=(a+b+c)/3;
    // if(a<33||b<33||c<33||totalpercentage<40){
    //     printf("Failed....Your total percentage is %f\n",totalpercentage);
    // }
    // else{
    //     printf("Passed!!.....Your total percentage is %f\n",totalpercentage);
    // }
    // ------------------------------------------------THIRD PROBLEM(INCOMETAX)-------------------------------------------------
    // float income,tax=0;
    // printf("Enter your annual income\n");
    // scanf("%f",&income);
    // if(income>=250000&&income<500000){
    //     printf("you are liable to taxation at 5 percent\n");
    //     tax=0.05*income;
    //     printf("Your payable tax would be %f\n",tax);
    // }
    // else if(income>=500000&&income<1000000){
    //     printf("you are liable to taxation at 20 percent\n");
    //     tax=0.20*income;
    //     printf("Your payable tax would be %f\n",tax);
    // }
    // else if(income>1000000){
    //     printf("you are liable to taxation at 30 percent\n");
    //     tax=0.30*income;
    //     printf("Your payable tax would be %f\n",tax);
    // }
    // ------------------------------------------------FOURTH PROBLEM(LEAP YEAR)---------------------------------------------------
    // int year;
    // printf("year pls\n");
    // scanf("%d",&year);
    // if(year%4==0){
    //     printf("Divisible by 004......check\n");
    //     if(year%100==0){
    //         printf("Divisible by 100......check\n");
    //         if(year%400==0){
    //             printf("Divisible by 400......check\n");
    //             printf("Hence this year is leap!!!!\n");
    //         }
    //     }
    // }
    // else{
    //     printf("Not a leap year\n");
    // }
    // -------------------------------------------------FIFTH PROBLEM(LARGEST NO.)-----------------------------------------------
    // int num1,num2,num3,num4;
    // printf("Enter the numbers(with space)\n");
    // scanf("%d %d %d %d",&num1,&num2,&num3,&num4);
    // if(num1>num2 && num1>num3 && num1>num4){
    //         printf("The largest number in all of these is %d",num1);
    // }
    // if(num2>num3 && num2>num4 && num2>num1){
    //         printf("The largest number in all of these is %d",num2);
    // }
    // if(num3>num1 && num3>num2 && num3>num4){
    //         printf("The largest number in all of these is %d",num3);
    // }
    // if(num4>num1 && num4>num2 && num4>num3){
    //         printf("The largest number in all of these is %d",num4);
    // }
    // ------------------------------VVI--------SIXTH PROBLEM(LOWERCASE UPPERCASE CHECK)VVI--------------------------------------------------
    //       97-112=a-z lowercase values ASCII values
    char ch;
    printf("Enter the character\n");
    scanf("%c", &ch);
    if (ch <= 112 && ch >= 97)
    {
        printf("Hence the %c is in lower case\n", ch);
    }
    else
    {
        printf("Hence the %c is in upper case\n", ch);
    }

    return 0;
}