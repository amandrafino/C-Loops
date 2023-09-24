#include <stdio.h>

void  makeLoop() {
    int count = 0;

    while (count < 5) {
        printf("Iteration: %i\n", count);
        count ++;
    }
}

int main(void) {
    makeLoop();
    return 0;
}
