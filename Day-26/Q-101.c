#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int guess=0,tries=1;
    int num;
    srand(time(NULL));
    num=(rand() % 50) + 1;
    printf("Guess a number between 1 to 50.\nYou have 5 tries.\n");
    while (tries<=5 || guess==num){
        tries++;
        printf("Enter your guess: ");
        scanf("%d",&guess);
        if (guess!=num)
            printf("Wrong guess, try again.\n");
        else{
            printf("Correct guess.\nThe number is %d\n",num);
            break;
        }
    }
    if (guess!=num)
        printf("Out of tries.\nThe number was %d.\n",num);
    return 0;
}    