#include <stdio.h>

struct House {
    int room_quantity;
    int established_year;
    char city[100];
};

int main() {
    int n;

    printf("Enter the number of houses: ");
    scanf("%d", &n);

    struct House houses[n];

    for (int i = 0; i < n; i++) {
        printf("\nEnter details for house %d:\n", i + 1);

        printf("Room Quantity: ");
        scanf("%d", &houses[i].room_quantity);

        printf("Established Year: ");
        scanf("%d", &houses[i].established_year);

        printf("City: ");
        scanf(" %[^\n]%*c", houses[i].city);
    }

    printf("\n--- House Details ---\n");
    for (int i = 0; i < n; i++) {
        printf("\nHouse %d:\n", i + 1);
        printf("Room Quantity: %d\n", houses[i].room_quantity);
        printf("Established Year: %d\n", houses[i].established_year);
        printf("City: %s\n", houses[i].city);
    }

    return 0;
}
