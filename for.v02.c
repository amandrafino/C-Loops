#include <stdio.h>

int main() {
    int target = 10;
    for (int i = 0; i <= target; i++) {
        printf("Iteration: %i\n", i);
        
        if (i == target) {
            printf("You have reached your target of %i\n", i);
            break;
        }
    }
    return 0;
}
