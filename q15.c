#include <stdio.h>
#include <string.h>

void removerEspacosEConverterMinusculas(char palavra[], char palavraFormatada[]);

int ehPalindromo(char palavra[]) {
    char palavraFormatada[100];
    int i, length;

    removerEspacosEConverterMinusculas(palavra, palavraFormatada);

    length = strlen(palavraFormatada);

    for (i = 0; i < length / 2; i++) {
        if (palavraFormatada[i] != palavraFormatada[length - 1 - i]) {
            return 0;
        }
    }

    return 1;
}

void removerEspacosEConverterMinusculas(char palavra[], char palavraFormatada[]) {
    int i, j = 0;

    for (i = 0; palavra[i] != '\0'; i++) {
        if (palavra[i] != ' ') {
            palavraFormatada[j++] = tolower(palavra[i]);
        }
    }

    palavraFormatada[j] = '\0';
}

int main() {
    char palavra[100];

    printf("Digite uma palavra: ");
    fgets(palavra, sizeof(palavra), stdin);
    palavra[strcspn(palavra, "\n")] = 0;

    if (ehPalindromo(palavra)) {
        printf("%s e um palindromo.\n", palavra);
    } else {
        printf("%s nao e um palindromo.\n", palavra);
    }

    return 0;
}
