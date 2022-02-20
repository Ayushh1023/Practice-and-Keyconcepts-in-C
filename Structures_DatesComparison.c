#include<stdio.h>
typedef struct date{
    int date;
    int month;
    int year;
}date;
 
void display (date d){
    printf("the date is %d/%d/%d \n", d.date,d.month,d.year);
}

int datecmp(date d1, date d2){


    //make decision on the basis of year
    if(d1.year>d2.year){
        return 1; 
    }
    if(d1.year<d2.year){
        return -1;
    }


    //make decision on the basis of month
    if(d1.month>d2.month){
        return 1;
    }
    if(d1.month<d2.month){
        return -1;
    }


    //make decision ont he basis of day
    if(d1.date>d2.date){
        return 1;
    }
    if(d1.date<d2.date){
        return -1;
    }

    
    
    return 0;
}
int main(){
    date d1 = {2,11,21}; //one line declaration
    date d2 = {23,11,21}; //one line declaration

    display(d1);
    display(d2);
    int a= datecmp(d1,d2);
    printf("%d",a);

    return 0;
}