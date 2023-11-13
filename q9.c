#include <stdio.h>

void encontrarMaiorEPosicao(int vetor[], int tamanho, int *maior, int *posicaoMaior) {
    *maior = vetor[0];
    *posicaoMaior = 0;

    for (int i = 1; i < tamanho; i++) {
        if (vetor[i] > *maior) {
            *maior = vetor[i];
            *posicaoMaior = i;
        }
    }
}

void encontrarMenorEPosicao(int vetor[], int tamanho, int *menor, int *posicaoMenor) {
    *menor = vetor[0];
    *posicaoMenor = 0;

    for (int i = 1; i < tamanho; i++) {
        if (vetor[i] < *menor) {
            *menor = vetor[i];
            *posicaoMenor = i;
        }
    }
}

int main() {
    int vetor[15];
    int maior, posicaoMaior, menor, posicaoMenor;

    printf("Digite 15 valores para preencher o vetor:\n");
    for (int i = 0; i < 15; i++) {
        scanf("%d", &vetor[i]);
    }

    encontrarMaiorEPosicao(vetor, 15, &maior, &posicaoMaior);
    encontrarMenorEPosicao(vetor, 15, &menor, &posicaoMenor);

    printf("O maior elemento do vetor é %d e está na posição %d.\n", maior, posicaoMaior + 1);
    printf("O menor elemento do vetor é %d e está na posição %d.\n", menor, posicaoMenor + 1);

    return 0;
}
