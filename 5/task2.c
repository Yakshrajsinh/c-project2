#include <stdio.h>
#include <ctype.h>

void countConsonants(char sentence[]) {
    int counts[26] = {0};

    for (int i = 0; sentence[i] != '\0'; i++) {
        char ch = tolower(sentence[i]);
        if (ch >= 'a' && ch <= 'z') {
            if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u') {
                counts[ch - 'a']++;
            }
        }
    }

    printf("Consonant occurrences:\n");
    for (int i = 0; i < 26; i++) {
        if (counts[i] > 0 && (i + 'a') != 'a' && (i + 'a') != 'e' && (i + 'a') != 'i' && (i + 'a') != 'o' && (i + 'a') != 'u') {
            printf("%c: %d\n", i + 'a', counts[i]);
        }
    }
}

int main() {
    char sentence[1000];

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    countConsonants(sentence);

    return 0;
}
