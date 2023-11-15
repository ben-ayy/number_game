#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "games.h"

int main(int argc, char* argv[]) {
    int n;
    char choice;
    if (argc != 2) {
        printf("Command usage: game <computer|player>\n");
        return 1;
    }
    srand((unsigned) time(NULL));
    n = rand() % 100 + 1;
    choice = argv[1][0];
    if (choice == 'c') {
        againstComputer(n);
    } else if (choice == 'p') {
        againstPlayer();
    } else {
        printf("Invalid option\n");
        return 1;
    }
    return 0;
}