#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Initialize random number generator
    srand(time(0));
    int targetNumber = (rand() % 100) + 1; // Random number between 1 and 100
    int guess = 0;
    int attempts = 0;

    printf("Welcome to the Number Guessing Game!\n");
    printf("I have chosen a number between 1 and 100.\n");
    printf("Try to guess it!\n");

    // Game loop
    while (guess != targetNumber) {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess < targetNumber) {
            printf("Higher number please.\n");
        } else if (guess > targetNumber) {
            printf("Lower number please.\n");
        } else {
            printf("Congratulations! You've guessed the number.\n");
            printf("It took you %d attempts.\n", attempts);
        }
    }

    return 0;
}
