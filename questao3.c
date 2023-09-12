#include <stdio.h>

int main() {
    int vetor[3], opcao;

    printf("Digite os 3 números inteiros, um de cada vez:\n");
    scanf("%d", &vetor[0]);
    scanf("%d", &vetor[1]);
    scanf("%d", &vetor[2]);

    printf("Qual opção você deseja?\n1 - Mostre os números em ordem crescente.\n2 - Mostre os números em ordem decrescente.\n3 - Mostre o menor número entre os demais.\n");
    scanf("%d", &opcao);

    if (opcao == 1) {
        for (int i = 0; i < 3; i++) {
            for (int j = i; j < 3; j++) {
                if (vetor[i] > vetor[j]) {
                    int temp = vetor[i];
                    vetor[i] = vetor[j];
                    vetor[j] = temp;
                }
            }
        }
        printf("Números em ordem crescente: %d - %d - %d\n", vetor[0], vetor[1], vetor[2]);
    } else if (opcao == 2) {
        for (int i = 0; i < 3; i++) {
            for (int j = i; j < 3; j++) {
                if (vetor[i] < vetor[j]) {
                    int temp = vetor[i];
                    vetor[i] = vetor[j];
                    vetor[j] = temp;
                }
            }
        }
        printf("Números em ordem decrescente: %d - %d - %d\n", vetor[0], vetor[1], vetor[2]);
    } else if (opcao == 3) {
        int menor = vetor[0];
        for (int i = 1; i < 3; i++) {
            if (vetor[i] < menor) {
                menor = vetor[i];
            }
        }
        printf("O menor número entre os demais é: %d\n", menor);
    } else {
        printf("Opção inválida\n");
    }
    return 0;
}