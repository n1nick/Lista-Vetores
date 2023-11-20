#include <stdio.h>

int main() {
    int n;

    printf("Digite o tamanho da sequencia: ");
    scanf("%d", &n);

    double sequencia[n];

    printf("Digite os numeros da sequencia:\n");
    for (int i = 0; i < n; i++) {
        scanf("%lf", &sequencia[i]);
    }

    for (int i = 0; i < n; i++) {
        int contador = 1;

        if (sequencia[i] != 0) {
            for (int j = i + 1; j < n; j++) {
                if (sequencia[i] == sequencia[j]) {
                    contador++;
                    sequencia[j] = 0;
                }
            }

            printf("%.1f ocorre %d vez(es)\n", sequencia[i], contador);
        }
    }

    return 0;
}

