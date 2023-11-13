#include <stdio.h>
#include <stdlib.h>

void mostrarVetor(int vetor[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}

void mostrarVetorInverso(int vetor[], int tamanho) {
    for (int i = tamanho - 1; i >= 0; i--) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}

void calcularMediana(int vetor[], int tamanho) {
    int meio = tamanho / 2;

    if (tamanho % 2 == 0) {
        double mediana = (vetor[meio - 1] + vetor[meio]) / 2.0;
        printf("Mediana: %.2f\n", mediana);
    } else {
        int mediana = vetor[meio];
        printf("Mediana: %d\n", mediana);
    }
}

long calcularProduto(int vetor[], int tamanho) {
    long produto = 1;

    for (int i = 0; i < tamanho; i++) {
        produto *= vetor[i];
    }

    return produto;
}

void calcularPorcentagemParesPositivos(int vetor[], int tamanho) {
    int paresPositivos = 0;

    for (int i = 0; i < tamanho; i++) {
        if (vetor[i] > 0 && vetor[i] % 2 == 0) {
            paresPositivos++;
        }
    }

    double porcentagem = (paresPositivos / (double)tamanho) * 100;
    printf("Porcentagem de valores pares e positivos: %.2f%%\n", porcentagem);
}

void mostrarImparesESoma(int vetor[], int tamanho) {
    int somaImpares = 0;

    printf("Números ímpares: ");
    for (int i = 0; i < tamanho; i++) {
        if (vetor[i] % 2 != 0) {
            printf("%d ", vetor[i]);
            somaImpares += vetor[i];
        }
    }

    printf("\nSoma dos números ímpares: %d\n", somaImpares);
}

int verificarRepetidos(int vetor[], int tamanho) {
    for (int i = 0; i < tamanho - 1; i++) {
        for (int j = i + 1; j < tamanho; j++) {
            if (vetor[i] == vetor[j]) {
                return 1; 
            }
        }
    }

    return 0;
}

int main() {
    int vetor[50];
    int n;

    printf("Digite um número inteiro N: ");
    scanf("%d", &n);

    if (n == 0) {
        printf("Programa encerrado.\n");
    } else {
        printf("Digite os 50 números do vetor:\n");

        for (int i = 0; i < 50; i++) {
            scanf("%d", &vetor[i]);
        }

        switch (n) {
            case 1:
                mostrarVetor(vetor, 50);
                break;
            case 2:
                mostrarVetorInverso(vetor, 50);
                break;
            case 3:
                calcularMediana(vetor, 50);
                break;
            case 4:
                printf("Produto dos 50 números: %ld\n", calcularProduto(vetor, 50));
                break;
            case 5:
                calcularPorcentagemParesPositivos(vetor, 50);
                break;
            case 6:
                mostrarImparesESoma(vetor, 50);
                break;
            case 7:
                if (verificarRepetidos(vetor, 50)) {
                    printf("Existem números repetidos no vetor.\n");
                } else {
                    printf("Não há números repetidos no vetor.\n");
                }
                break;
            default:
                printf("Opção inválida.\n");
        }
    }

    return 0;
}
