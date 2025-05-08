#include <stdio.h>

void cubeArray(int *arr, int n) {
    for (int i = 0; i < n; i++) {
        *(arr + i) = (*(arr + i)) * (*(arr + i)) * (*(arr + i)); 
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

    cubeArray(arr, n);

    printf("The cubes of the array elements are:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}
