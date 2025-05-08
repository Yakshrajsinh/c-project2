#include <stdio.h>

int reverseNumber(int num) {
    int reversed = 0;
    while (num != 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    return reversed;
}

int main() {
    int num;

    printf("Enter a 3-digit number: ");
    scanf("%d", &num);

    if (num < 100 || num > 999) {
        printf("Please enter a 3-digit number.\n");
        return 1;
    }

    int reversed = reverseNumber(num);
    printf("Reversed number: %d\n", reversed);

    return 0;
}
