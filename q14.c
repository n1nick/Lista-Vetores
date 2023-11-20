#include <stdio.h>

int maxSubArraySum(int arr[], int n) {
    int maxAtual = arr[0];
    int maxGlobal = arr[0];

    for (int i = 1; i < n; i++) {
        if (maxAtual + arr[i] > arr[i]) {
            maxAtual += arr[i];
        } else {
            maxAtual = arr[i];
        }

        if (maxAtual > maxGlobal) {
            maxGlobal = maxAtual;
        }
    }

    return maxGlobal;
}

int main() {
    int n;

    printf("Digite o tamanho da sequencia: ");
    scanf("%d", &n);

    int sequencia[n];

    printf("Digite os numeros da sequencia:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &sequencia[i]);
    }

    int maxSoma = maxSubArraySum(sequencia, n);
    printf("A soma do segmento maximo e: %d\n", maxSoma);

    return 0;
}
