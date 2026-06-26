#include <stdio.h>

int main() {
    char ans;
    int score = 0;

    printf("===== C QUIZ =====\n");

    printf("\n1. C is a ______ language.\n");
    printf("a) Programming\n");
    printf("b) Operating System\n");
    printf("c) Browser\n");
    printf("Answer: ");
    scanf(" %c", &ans);

    if (ans == 'a' || ans == 'A')
        score++;

    printf("\n2. Which symbol is used to end a statement in C?\n");
    printf("a) :\n");
    printf("b) ;\n");
    printf("c) ,\n");
    printf("Answer: ");
    scanf(" %c", &ans);

    if (ans == 'b' || ans == 'B')
        score++;

    printf("\n3. Which function is used for output in C?\n");
    printf("a) scanf()\n");
    printf("b) printf()\n");
    printf("c) gets()\n");
    printf("Answer: ");
    scanf(" %c", &ans);

    if (ans == 'b' || ans == 'B')
        score++;

    printf("\nYour Score: %d/3\n", score);

    if (score == 3)
        printf("Excellent!\n");
    else if (score == 2)
        printf("Good Job!\n");
    else
        printf("Keep Practicing!\n");

    return 0;
}