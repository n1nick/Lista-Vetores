#include <stdio.h>
#include <string.h>

void eliminarEspacosRepetidos(char original[], char resultado[]);

int main() {
    char entrada[100];
    char semEspacos[100];

    printf("Digite uma string: ");
    fgets(entrada, sizeof(entrada), stdin);
    entrada[strcspn(entrada, "\n")] = 0;

    eliminarEspacosRepetidos(entrada, semEspacos);

    printf("String sem espacos repetidos: %s\n", semEspacos);

    return 0;
}

void eliminarEspacosRepetidos(char original[], char resultado[]) {
    int i, j = 0;
    int length = strlen(original);

    for (i = 0; i < length; i++) {
        if (!(original[i] == ' ' && original[i + 1] == ' ')) {
            resultado[j++] = original[i];
        }
    }

    resultado[j] = '\0';
}
