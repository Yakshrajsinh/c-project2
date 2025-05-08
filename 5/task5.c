#include <stdio.h>

void sumArrays(int *arr1, int *arr2, int *sum, int size) {
    for (int i = 0; i < size; i++) {
        *(sum + i) = *(arr1 + i) + *(arr2 + i);
    }
}

int main() {
    int size;

    printf("Enter the size of the arrays: ");
    scanf("%d", &size);

    int arr1[size], arr2[size], sum[size];

    printf("Enter elements of the first array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter elements of the second array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr2[i]);
    }

    sumArrays(arr1, arr2, sum, size);

    printf("Sum of the arrays:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", sum[i]);
    }
    printf("\n");

    return 0;
}
