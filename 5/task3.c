#include <stdio.h>

int main() {
    for (int i = 0; i < 5; i++) {
        for (int s = 0; s < i; s++) {
            printf("_ ");
        }
        for (int j = 10 - i; j >= 6; j--) {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}
