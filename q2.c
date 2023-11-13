#include <stdio.h>
void trocar_elementos(int vetor[], int tamanho) {
    int temp;

    for (int i = 1; i < tamanho; i += 2) {
        temp = vetor[i];
        vetor[i] = vetor[i - 1];
        vetor[i - 1] = temp;
    }
}

int main() {
    int K[30];

    for (int i = 0; i < 30; i++) {
        printf("Digite o valor para K[%d]: ", i);
        scanf("%d", &K[i]);
    }

    trocar_elementos(K, 30);

    printf("Vetor K após a troca:\n");
    for (int i = 0; i < 30; i++) {
        printf("%d ", K[i]);
    }
    printf("\n");

    return 0;
}
