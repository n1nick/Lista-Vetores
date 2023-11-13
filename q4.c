#include <stdio.h>

#define NUM_ALUNOS 50
#define TAM_GABARITO 10

int contar_acertos(char gabarito[], char respostas[]) {
    int acertos = 0;

    for (int i = 0; i < TAM_GABARITO; i++) {
        if (gabarito[i] == respostas[i]) {
            acertos++;
        }
    }

    return acertos;
}

int main() {
    char gabarito[TAM_GABARITO];
    char respostas_aluno[TAM_GABARITO];

    printf("Digite o gabarito da prova (10 caracteres): ");
    for (int i = 0; i < TAM_GABARITO; i++) {
        scanf(" %c", &gabarito[i]);
    }

    for (int aluno = 1; aluno <= NUM_ALUNOS; aluno++) {
        printf("Respostas do aluno %d (10 caracteres): ", aluno);
        for (int i = 0; i < TAM_GABARITO; i++) {
            scanf(" %c", &respostas_aluno[i]);
        }

        int acertos = contar_acertos(gabarito, respostas_aluno);

        printf("Número de acertos do aluno %d: %d - %s\n", aluno, acertos, acertos >= 6 ? "APROVADO" : "REPROVADO");
    }

    return 0;
}
