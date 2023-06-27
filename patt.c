#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int number, guess, attempts = 0;
    time_t startTime, endTime;
    srand(time(0));
    number = rand() % 100 + 1;

    printf("Welcome to the Number Guessing Game!\n");
    printf("I'm thinking of a number between 1 and 100.\n");

    startTime = time(NULL);

    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess > number) {
            printf("Too high! Try again.\n");
        } else if (guess < number) {
            printf("Too low! Try again.\n");
        } else {
            printf("Congratulations! You guessed the number in %d attempts.\n", attempts);
        }
    } while (guess != number);

    endTime = time(NULL);
    double timeTaken = difftime(endTime, startTime);
    printf("Time taken: %.2f seconds\n", timeTaken);

    return 0;
}
