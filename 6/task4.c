#include <stdio.h>

void findSquare(int *arr, int n) {
    for (int i = 0; i < n; i++) {
        *(arr + i) = *(arr + i) * *(arr + i);
    }
}

int main() {
    int n;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    findSquare(arr, n);

    printf("Squares of the elements:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
