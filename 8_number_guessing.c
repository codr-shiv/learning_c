#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main () {
    srand(time(NULL));
    int secret = (rand() % 10)+1;
    int t, guess;
    for (t = 10; t > 0; t--) {
        printf("\nTries: %d\n", t);
        printf("Your guess: ");
        scanf("%d", &guess);
        if (guess == secret) {
            printf("You win with %d tries remaining!", t-1);
            t = 0;
        }
        if (guess < secret) printf("Higher\n");
        if (guess > secret) printf("Lower\n");
    }
    printf("\nThe secret number was %d\n", secret);
}