#include <stdio.h>

float findAverage(int rows, int cols, int arr[rows][cols]) {
    int sum = 0;
    int total = rows * cols;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum += arr[i][j];
        }
    }

    return (float)sum / total;
}

int main() {
    int rows, cols;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int arr[rows][cols];

    printf("Enter elements of the 2D array:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    float average = findAverage(rows, cols, arr);
    printf("Average of all elements: %.2f\n", average);

    return 0;
}
