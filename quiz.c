#include <stdio.h>
int main() {
    int score = 0, answer;
    printf("Welcome to the Quiz Game!\n");
    printf("------------------------------\n");
    printf("Q1. What is the capital of India?\n");
    printf("1) Mumbai\n2) Delhi\n3) Kolkata\n4) Chennai\n");
    printf("Your answer: ");
    scanf("%d", &answer);
    if (answer == 2) score++;
    printf("\nQ2. Which planet is known as the Red Planet?\n");
    printf("1) Venus\n2) Jupiter\n3) Mars\n4) Saturn\n");
    printf("Your answer: ");
    scanf("%d", &answer);
    if (answer == 3) score++;
    printf("\nQ3. How many days are there in a leap year?\n");
    printf("1) 365\n2) 366\n3) 367\n4) 364\n");
    printf("Your answer: ");
    scanf("%d", &answer);
    if (answer == 2) score++;
    printf("\n------------------------------\n");
    printf("?? Your final score is: %d/3\n", score);
    return 0;
}