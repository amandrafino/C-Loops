#include <stdio.h>

int main() {
    int count = 0;

    do {
        printf("Iteration %i\n", count);
        count++;
    } while (count < 5);

    return 0;
}
