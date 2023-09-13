#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Seed the random number generator with the current time
    srand(time(NULL));

    // Generate a random number between INT_MIN and INT_MAX
    int n = rand();

    // Check if the number is positive, zero, or negative
    printf("The number %d is ", n);

    if (n > 0) {
        printf("positive\n");
    } else if (n == 0) {
        printf("zero\n");
    } else {
        printf("negative\n");
    }

    return 0;
}

