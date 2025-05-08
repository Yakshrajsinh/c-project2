#include <stdio.h>

struct Employee {
    char name[100];
    char role[100];
};

int main() {
    FILE *file;
    struct Employee employees[3];

    file = fopen("data.txt", "w");

    if (file == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }


    for (int i = 0; i < 3; i++) {
        printf("\nEnter details for employee %d:\n", i + 1);
        
        printf("Name: ");
        scanf(" %[^\n]%*c", employees[i].name);  

        printf("Role (Designation): ");
        scanf(" %[^\n]%*c", employees[i].role);  
    }

    
    for (int i = 0; i < 3; i++) {
        fprintf(file, "Employee %d:\n", i + 1);
        fprintf(file, "Name: %s\n", employees[i].name);
        fprintf(file, "Role: %s\n\n", employees[i].role);
    }

    fclose(file);

    printf("\nEmployee details have been written to data.txt successfully.\n");

    return 0;
}
