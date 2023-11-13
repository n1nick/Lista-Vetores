#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool eh_primo(int numero) {
    if (numero <= 1) {
        return false;
    }

    for (int i = 2; i <= sqrt(numero); i++) {
        if (numero % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    int K[15];
    int P[15];

    printf("Digite 15 valores inteiros não negativos para o vetor K:\n");
    for (int i = 0; i < 15; i++) {
        scanf("%d", &K[i]);
    }

    int tamanhoP = 0;
    for (int i = 0; i < 15; i++) {
        if (eh_primo(K[i])) {
            P[tamanhoP] = K[i];
            tamanhoP++;
        }
    }

    printf("Vetor P contendo os números primos de K:\n");
    for (int i = 0; i < tamanhoP; i++) {
        printf("%d ", P[i]);
    }
    printf("\n");

    return 0;
}
