#include <stdio.h>

struct Fruit {
    char name[100];
    char color[100];
};

int main() {
    int n;
    FILE *file;
    
    printf("Enter the number of fruits: ");
    scanf("%d", &n);

    struct Fruit fruits[n];

    for (int i = 0; i < n; i++) {
        printf("\nEnter details for fruit %d:\n", i + 1);

        printf("Name: ");
        scanf(" %[^\n]%*c", fruits[i].name);

        printf("Color: ");
        scanf(" %[^\n]%*c", fruits[i].color);
    }

    file = fopen("data.txt", "w");

    if (file == NULL) {
        printf("Unable to open file.\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        fprintf(file, "Fruit %d:\n", i + 1);
        fprintf(file, "Name: %s\n", fruits[i].name);
        fprintf(file, "Color: %s\n\n", fruits[i].color);
    }

    fclose(file);

    printf("\nFruit details have been written to data.txt.\n");

    return 0;
}
