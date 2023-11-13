#include <stdio.h>

void trocar_elementos(int vetor[], int tamanho) {
    int temp;

    for (int i = 0; i < tamanho / 2; i++) {
        temp = vetor[i];
        vetor[i] = vetor[tamanho - 1 - i];
        vetor[tamanho - 1 - i] = temp;
    }
}

int main() {
    int vetor[20];

    for (int i = 0; i < 20; i++) {
        printf("Digite o valor para vetor[%d]: ", i);
        scanf("%d", &vetor[i]);
    }

    printf("Vetor original:\n");
    for (int i = 0; i < 20; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    trocar_elementos(vetor, 20);

    printf("Vetor após a troca:\n");
    for (int i = 0; i < 20; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}
