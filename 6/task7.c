#include <stdio.h>

int main() {
    int num = 100;

    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", num);
        }
        printf("\n");
        num -= 19;  
    }
    return 0;
}
