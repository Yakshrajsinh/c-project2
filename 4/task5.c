#include <stdio.h>

struct Laptop {
    char company_name[100];
    char processor[100];
    float price;
};

int main() {
    int n;

    printf("Enter the number of laptops: ");
    scanf("%d", &n);

    struct Laptop laptops[n];

    for (int i = 0; i < n; i++) {
        printf("\nEnter details for laptop %d:\n", i + 1);

        printf("Company Name: ");
        scanf(" %[^\n]%*c", laptops[i].company_name);

        printf("Processor: ");
        scanf(" %[^\n]%*c", laptops[i].processor);

        printf("Price: ");
        scanf("%f", &laptops[i].price);
    }

    printf("\n--- Laptop Details ---\n");
    for (int i = 0; i < n; i++) {
        printf("\nLaptop %d:\n", i + 1);
        printf("Company Name: %s\n", laptops[i].company_name);
        printf("Processor: %s\n", laptops[i].processor);
        printf("Price: %.2f\n", laptops[i].price);
    }

    return 0;
}
