#include <stdio.h>

int main() {
    int arr[5], i;
    int *ptr = arr; 

    
    printf("Enter 5 elements:\n");
    for(i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Squares of each element:\n");
    for(i = 0; i < 5; i++) {
        *(ptr + i) = *(ptr + i) * *(ptr + i);
        printf("Square of %d: %d\n", *(ptr + i), *(ptr + i));
    }

    return 0;
}
