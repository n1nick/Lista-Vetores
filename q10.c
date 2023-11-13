#include <stdio.h>

void multiplicarPeloMaior(int vetor[], int tamanho) {
    int maior = vetor[0];
    for (int i = 1; i < tamanho; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
        }
    }

    for (int i = 0; i < tamanho; i++) {
        vetor[i] *= maior;
    }
}

int main() {
    int vetor[15];

    printf("Digite 15 valores para preencher o vetor:\n");
    for (int i = 0; i < 15; i++) {
        scanf("%d", &vetor[i]);
    }

    multiplicarPeloMaior(vetor, 15);

    printf("Vetor após multiplicar pelo maior valor:\n");
    for (int i = 0; i < 15; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}
