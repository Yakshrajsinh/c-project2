#include <stdio.h>

struct Movie {
    char title[100];
    char genre[50];
    char language[50];
};

int main() {
    int n;

    printf("Enter the number of movies: ");
    scanf("%d", &n);

    struct Movie movies[n];

    for (int i = 0; i < n; i++) {
        printf("\nEnter details for movie %d:\n", i + 1);

        printf("Title: ");
        scanf(" %[^\n]%*c", movies[i].title);

        printf("Genre: ");
        scanf(" %[^\n]%*c", movies[i].genre);

        printf("Language: ");
        scanf(" %[^\n]%*c", movies[i].language);
    }

    printf("\n--- Movie Details ---\n");
    for (int i = 0; i < n; i++) {
        printf("\nMovie %d:\n", i + 1);
        printf("Title: %s\n", movies[i].title);
        printf("Genre: %s\n", movies[i].genre);
        printf("Language: %s\n", movies[i].language);
    }

    return 0;
}
