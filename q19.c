#include <stdio.h>
#include <string.h>

int contarOcorrencias(char frase[], char palavra[]) {
    int numOcorrencias = 0;
    int tamFrase = strlen(frase);
    int tamPalavra = strlen(palavra);

    for (int i = 0; i <= tamFrase - tamPalavra; i++) {
        int j;

        for (j = 0; j < tamPalavra; j++) {
            if (frase[i + j] != palavra[j]) {
                break;
            }
        }

        if (j == tamPalavra) {
            numOcorrencias++;
        }
    }

    return numOcorrencias;
}

int main() {
    char frase[100];
    char palavra[20];

    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);
    frase[strcspn(frase, "\n")] = '\0';

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    int numOcorrencias = contarOcorrencias(frase, palavra);

    printf("Temos que a palavra ocorre %d vezes na frase.\n", numOcorrencias);

    return 0;
}
