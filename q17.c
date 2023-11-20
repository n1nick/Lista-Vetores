#include <stdio.h>
#include <ctype.h>

void capitalizeWords(char input[], char result[]);

int main() {
    char input[100];
    char result[100];

    printf("Digite uma string: ");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = '\0';

    capitalizeWords(input, result);

    printf("String com a primeira letra de cada palavra em maiuscula: %s\n", result);

    return 0;
}

void capitalizeWords(char input[], char result[]) {
    int i, j = 0;
    int length = strlen(input);

    for (i = 0; i < length; i++) {
        if (isspace(input[i])) {
            result[j++] = input[i];
        } else if (i == 0 || isspace(input[i - 1])) {
            result[j++] = toupper(input[i]);
        } else {
            result[j++] = input[i];
        }
    }

    result[j] = '\0';
}
