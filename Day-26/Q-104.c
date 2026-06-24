#include<stdio.h>
int main(){
    int answer, score = 0;
    printf("QUIZ APPLICATION\n");
    printf("1. What is the capital of India?\n");
    printf("1. Mumbai\n2. New Delhi\n3. Kolkata\n4. Chennai\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if (answer == 2)
        score++;
    printf("\n2. Which language is used for system programming?\n");
    printf("1. C\n2. HTML\n3. CSS\n4. SQL\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if (answer == 1)
        score++;
    printf("\n3. How many days are there in a leap year?\n");
    printf("1. 364\n2. 365\n3. 366\n4. 367\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if (answer == 3)
        score++;
    printf("\n4. Which planet is known as the Red Planet?\n");
    printf("1. Venus\n2. Mars\n3. Jupiter\n4. Saturn\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if (answer == 2)
        score++;
    printf("\n5. What is the value of 5 * 6?\n");
    printf("1. 25\n2. 35\n3. 30\n4. 40\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if (answer == 3)
        score++;
    printf("\n===== RESULT =====\n");
    printf("Your Score: %d/5\n", score);
    if (score == 5)
        printf("Excellent!\n");
    else if (score >= 3)
        printf("Good Job!\n");
    else
        printf("Better Luck Next Time!\n");
    return 0;
}