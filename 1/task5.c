#include <stdio.h>

// Define the car structure
struct Car {
    char model[50];
    int year;
    float price;
};

int main() {
    struct Car cars[2];  

    
    for (int i = 0; i < 2; i++) {
        printf("Enter details for car %d:\n", i + 1);
        printf("Model: ");
        scanf("%s", cars[i].model);  
        printf("Year: ");
        scanf("%d", &cars[i].year);
        printf("Price: ");
        scanf("%f", &cars[i].price);
        printf("\n");
    }

    
    printf("Details of Cars:\n");
    for (int i = 0; i < 2; i++) {
        printf("Car %d\n", i + 1);
        printf("Model: %s\n", cars[i].model);
        printf("Year: %d\n", cars[i].year);
        printf("Price: $%.2f\n\n", cars[i].price);
    }

    return 0;
}
