#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int num,guess;
    // random number generator section
    int nguess=0;
    srand(time(0));
    num=rand()%100+1;

    // Number check and tally section
    printf("----------------------RANDOM NUMBER GAME---------------------------\n");
    // printf("The random no. is %d\n",num); 
    do{
        printf("Guess the number b/w 1 to 100:");
        scanf("%d",&guess);
        if(guess>num){
            printf("Lower number please\n");
        }
        else if(guess<num){
            printf("Higher Number please\n");
        }
        else{
            printf("You guessed it right in %d guesses\n",nguess);
        }
    nguess++;
    }while(guess!=num);    
    return 0;

}