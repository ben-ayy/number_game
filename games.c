#include "games.h"
#include <stdio.h>
#include <stdlib.h>

void againstComputer(int n) {
    int i, guess;
    for (i = 1; i <= 7; i++) {
        printf("Enter guess %d : ", i);
        scanf("%d", &guess);
        if (guess == n) {
            printf("Well done, correct!\n");
            return;
        } else if (guess > n) {
            printf("Too high!\n");
        } else if (guess < n) {
            printf("Too low!\n");
        }
    }
    printf("You stupid lmao\n");
}

void againstPlayer() {
    int guess, i, upper, lower;
    char choice;
    upper = 100;
    lower = 1;
    for (i = 1; i <=7; i++) {
        guess = (rand() % (upper - lower + 1)) + lower ;
        printf("Guess %d: %d\n", i, guess);
        printf("Is the number higher, lower, or correct? (h|l|c) ");
        scanf(" %c", &choice);
        if (choice == 'h') {
            lower = guess + 1;
            continue;
        } else if (choice == 'l') {
            upper = guess - 1;
            continue;
        } else if (choice == 'c') {
            printf("I win!\n");
            return;
        } else {
            printf("Invalid choice\n");
            i--;
            continue;
        }
    }
    printf("I lose :(\n");
}