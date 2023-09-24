#include <stdio.h>

int makeLoop() {
    int count = 0;

    while (count < 5) {
        printf("Interation: %i\n", count);
        count++;
    }
    return count;
}

int main(void) {
    int iterations = makeLoop();
    printf("Total iterations: %i\n", iterations);
    return 0;
}
