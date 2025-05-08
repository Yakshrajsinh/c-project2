#include <stdio.h>

int main() {
    char sentence[1000];
    FILE *inputFile, *outputFile;

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    inputFile = fopen("input.txt", "w");
    if (inputFile == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }

    fprintf(inputFile, "%s", sentence);
    fclose(inputFile);

    inputFile = fopen("input.txt", "r");
    if (inputFile == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }

    outputFile = fopen("output.txt", "w");
    if (outputFile == NULL) {
        printf("Error opening output file.\n");
        fclose(inputFile);
        return 1;
    }

    while (fgets(sentence, sizeof(sentence), inputFile)) {
        fprintf(outputFile, "%s", sentence);
    }

    printf("The sentence has been written from input.txt to output.txt.\n");

    fclose(inputFile);
    fclose(outputFile);

    return 0;
}
