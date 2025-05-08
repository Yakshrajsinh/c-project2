#include <stdio.h>

struct Employee {
    char name[100];
    char role[100];
};

int main() {
    int n;
    FILE *file;

    printf("Enter the number of employees: ");
    scanf("%d", &n);

    struct Employee employees[n];

    for (int i = 0; i < n; i++) {
        printf("\nEnter details for employee %d:\n", i + 1);

        printf("Name: ");
        scanf(" %[^\n]%*c", employees[i].name);

        printf("Role: ");
        scanf(" %[^\n]%*c", employees[i].role);
    }

    file = fopen("data.txt", "w");
    if (file == NULL) {
        printf("Unable to open file.\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        fprintf(file, "Employee %d:\n", i + 1);
        fprintf(file, "Name: %s\n", employees[i].name);
        fprintf(file, "Role: %s\n\n", employees[i].role);
    }

    fclose(file);

    printf("\nEmployee details have been written to data.txt.\n");

    return 0;
}
