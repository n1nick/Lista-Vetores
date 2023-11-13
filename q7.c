#include <stdio.h>

void ordenarCrescente(int vetor[], int tamanho) {
    int temp;
    for (int i = 0; i < tamanho - 1; ++i) {
        for (int j = i + 1; j < tamanho; ++j) {
            if (vetor[i] > vetor[j]) {
                temp = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = temp;
            }
        }
    }
}

int main() {
    const int N = 10;
    int vetor[N];

    printf("Digite até %d números inteiros para preencher o vetor:\n", N);
    for (int i = 0; i < N; ++i) {
        scanf("%d", &vetor[i]);
    }

    ordenarCrescente(vetor, N);

    printf("Vetor ordenado crescentemente:\n");
    for (int i = 0; i < N; ++i) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}
