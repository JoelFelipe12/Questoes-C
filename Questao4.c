#include <stdio.h>
#define MAX_DIGITS 100

void multiply(int result[], int num, int *numDigits) {
    int carry = 0;
    for (int i = 0; i < *numDigits; i++) {
        int prod = result[i] * num + carry;
        result[i] = prod % 10;
        carry = prod / 10;
    }
    while (carry > 0) {
        result[*numDigits] = carry % 10;
        carry /= 10;
        (*numDigits)++;
    }
}

void factorial(int n) {
    int result[MAX_DIGITS] = {0};
    result[0] = 1;
    int numDigits = 1;

    for (int i = 2; i <= n; i++) {
        multiply(result, i, &numDigits);
    }

    printf("O fatorial de %d! = ", n);
    for (int i = numDigits - 1; i >= 0; i--) {
        printf("%d", result[i]);
    }
    printf("\n");
}
int main() {
    while (1) {
        int n;
        printf("Digite um numero qualquer ou 0 para sair): ");
        scanf("%d", &n);

        if (n == 0) {
            break;
        } else if (n < 0) {
            printf("Numero digitado invalido. Por favor, digite um numero positivo.\n");
        } else if (n > 100) {
            printf("Numero escolhido é muito grande.\n");
        } else {
            factorial(n);
        }
    }
    printf("Programa encerrado.\n");
    return 0;
}