#include <stdio.h>

void subtrairElementos(int vetorA[], int vetorB[], int tamanho, int vetorC[]) {
    for (int i = 0; i < tamanho; i++) {
        int indiceB = tamanho - 1 - i;
        vetorC[i] = vetorA[i] - vetorB[indiceB];
    }
}

int main() {
    int vetorA[10];
    int vetorB[10];
    int vetorC[10];

    printf("Digite 10 valores para preencher o vetor A:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &vetorA[i]);
    }

    printf("Digite 10 valores para preencher o vetor B:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &vetorB[i]);
    }

    subtrairElementos(vetorA, vetorB, 10, vetorC);

    printf("Vetor C resultante da subtração:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", vetorC[i]);
    }
    printf("\n");

    return 0;
}
