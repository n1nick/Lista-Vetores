#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void encontrarPalavraMaisLonga(char *frase, char *palavraMaisLonga) {
    int inicioPalavra = 0, inicioAtual = 0, tamanhoAtual = 0, tamanhoMaximo = 0;
    int length = strlen(frase);

    for (int i = 0; i <= length; i++) {
        if (i == length || frase[i] == ' ') {
            if (tamanhoAtual > tamanhoMaximo) {
                tamanhoMaximo = tamanhoAtual;
                palavraMaisLonga[0] = '\0'; 
                strncat(palavraMaisLonga, &frase[inicioAtual], tamanhoAtual);
            }

            tamanhoAtual = 0;
            inicioAtual = i + 1;
        } else {
            tamanhoAtual++;
        }
    }
}

int main() {
    printf("Digite uma frase: ");
    char frase[1000];
    fgets(frase, sizeof(frase), stdin);
    frase[strcspn(frase, "\n")] = '\0'; 
    char palavraMaisLonga[1000];

    encontrarPalavraMaisLonga(frase, palavraMaisLonga);

    printf("A palavra mais longa na frase é: %s\n", palavraMaisLonga);

    return 0;
}
