#include <stdio.h>
#include <ctype.h>

void countVowels(char sentence[]) {
    int a = 0, e = 0, i = 0, o = 0, u = 0;

    for (int j = 0; sentence[j] != '\0'; j++) {
        char ch = tolower(sentence[j]);

        if (ch == 'a') a++;
        else if (ch == 'e') e++;
        else if (ch == 'i') i++;
        else if (ch == 'o') o++;
        else if (ch == 'u') u++;
    }

    printf("Occurrences of vowels:\n");
    printf("A: %d\n", a);
    printf("E: %d\n", e);
    printf("I: %d\n", i);
    printf("O: %d\n", o);
    printf("U: %d\n", u);
}

int main() {
    char sentence[1000];

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    countVowels(sentence);

    return 0;
}
