#include <stdio.h>
#include <string.h>

int contarPalavras(char frase[]) {
    int numPalavras = 0;
    int i, length = strlen(frase);

    for (i = 0; i < length; i++) {
        while (i < length && frase[i] == ' ') {
            i++;
        }

        if (i < length) {
            numPalavras++;

            while (i < length && frase[i] != ' ') {
                i++;
            }
        }
    }

    return numPalavras;
}

int main() {
    char frase[100];

    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);
    frase[strcspn(frase, "\n")] = '\0';

    int numPalavras = contarPalavras(frase);

    printf("Número de palavras na frase: %d\n", numPalavras);

    return 0;
}
