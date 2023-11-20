#include <stdio.h>
    int A;
    int S = 0;
for (int i = 0; i < 10; i++) {
    int j = 20 - i - 1; // Índice reverso
    int diferenca = A[i] - A[j];
    S += diferenca * diferenca;
}
printf("O valor de S é: %d\n", S);
    return 0;
}
