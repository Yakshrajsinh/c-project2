#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    switch (num > 0) {
        case 1:
            printf("The number is positive.\n");
            break;
        case 0:
            switch (num < 0) {
                case 1:
                    printf("The number is negative.\n");
                    break;
                default:
                    printf("The number is zero.\n");
                    break;
            }
            break;
    }

    return 0;
}
