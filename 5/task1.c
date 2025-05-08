#include <stdio.h>

int main() {
    int num, first, last, sum;

    printf("Enter a 3-digit positive integer: ");
    scanf("%d", &num);

    if (num < 100 || num > 999) {
        printf("Invalid input. Please enter a 3-digit number.\n");
        return 1;
    }

    last = num % 10;
    first = num / 100;
    sum = first + last;

    printf("Sum of first and last digit: %d\n", sum);

    return 0;
}
