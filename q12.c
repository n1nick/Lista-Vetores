#include <stdio.h>

void somaSequencias(int seq1[], int seq2[], int resultado[], int n);

int main() {
    int seq1[] = {8, 2, 4, 3, 4, 2, 5, 1};
    int seq2[] = {3, 3, 7, 5, 2, 3, 3, 7};
    int n = sizeof(seq1) / sizeof(seq1[0]);

    int resultado[n];
    somaSequencias(seq1, seq2, resultado, n);

    printf("[ ");
    for (int i = 0; i < n; i++) {
        printf("%d ", resultado[i]);
    }
    printf("]\n");

    return 0;
}

void somaSequencias(int seq1[], int seq2[], int resultado[], int n) {
    int carry = 0;

    for (int i = n - 1; i >= 0; i--) {
        int digito1 = seq1[i];
        int digito2 = seq2[i];

        int somaDigitos = digito1 + digito2 + carry;
        int novoDigito = somaDigitos % 10;

        resultado[i] = novoDigito;

        carry = somaDigitos / 10;
    }

    if (carry > 0) {
        int resultadoComCarry[n + 1];
        resultadoComCarry[0] = carry;
        for (int i = 0; i < n; i++) {
            resultadoComCarry[i + 1] = resultado[i];
        }

        for (int i = 0; i < n + 1; i++) {
            resultado[i] = resultadoComCarry[i];
        }
    }
}
