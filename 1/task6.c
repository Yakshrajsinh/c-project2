#include <stdio.h>

struct Student {
    char name[50];
    char course[50];
};

int main() {
    struct Student students[3];
    FILE *file;

    file = fopen("data.txt", "w");

    if (file == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }

    for(int i = 0; i < 3; i++) {
        printf("Enter details for student %d:\n", i + 1);
        
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Course: ");
        scanf("%s", students[i].course); 

        fprintf(file, "Student %d:\n", i + 1);
        fprintf(file, "Name: %s\n", students[i].name);
        fprintf(file, "Course: %s\n\n", students[i].course);
    }

    fclose(file);

    printf("Student details have been written to data.txt successfully.\n");

    return 0;
}
