//program to create a number guessing game.
#include<stdio.h>
//header file for i/o
#include<stdlib.h>
//header file for srand() & rand()
#include<time.h>
//header file for time(NULL)
int main()
{
    int secret,guess,count=0;
    int max,min;
    printf("Enter the maximum and minimum number:\n");
    scanf("%d %d",&max,&min);
    //this time(NULL) fn gives the exact second running from jan 1,1970
    // then srand() gets the deck of numbers to choose changes every run as second changes
    // this helps the rand() to generate a different secret number every run
    //without the srand(time(NULL)) the rand() will generate the same random number at every run.
    srand(time(NULL));
    secret=rand()%(max-min+1)+min;
    printf("guess the number between %d to %d:",min,max);
    do
    {
        printf("Enter your guess:");
        scanf("%d",&guess);
        count++;
        if(guess<secret){
        printf("too low\n");
        }
        else if(guess>secret){
        printf("too high\n");
        }
        else{
        printf("Correct!,You guessed it\nTries= %d",count);
        }
    }
    while(guess!=secret);
    return 0;
}