#include <stdio.h>

int makeDo() {
    int count = 0;

    do {
        printf("iteration %i\n", count);
        count++;
    } while (count < 5);

    return count;
}

int main() {
    int iterations = makeDo();
    printf("Total iterations: %i\n", iterations);
    
    return 0;
}
