#include <stdio.h>

int main() {
    int marks[5];
    int sum = 0;
    float average;
    char grade;

    printf("Enter marks for 5 subjects (out of 100):\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &marks[i]);
        sum += marks[i];
    }

    average = sum / 5.0;

    if (average >= 90)
        grade = 'A';
    else if (average >= 80)
        grade = 'B';
    else if (average >= 70)
        grade = 'C';
    else if (average >= 60)
        grade = 'D';
    else
        grade = 'F';

    printf("Average: %.2f\n", average);
    printf("Grade: %c\n", grade);

    return 0;
}
