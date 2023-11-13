#include <stdio.h>
void encontrar_menor_elemento(float vetor[], int tamanho, float *menor_elemento, int *posicao) {
    *menor_elemento = vetor[0];
    *posicao = 0;

    for (int i = 1; i < tamanho; i++) {
        if (vetor[i] < *menor_elemento) {
            *menor_elemento = vetor[i];
            *posicao = i;
        }
    }
}
int main() {
    float N[20];
    for (int i = 0; i < 20; i++) {
        printf("Digite o valor para N[%d]: ", i);
        scanf("%f", &N[i]);
    }
    float menor_elemento;
    int posicao;
    encontrar_menor_elemento(N, 20, &menor_elemento, &posicao);
    printf("O menor elemento de N é %.2f e sua posição dentro do vetor é %d.\n", menor_elemento, posicao);

    return 0;
}
