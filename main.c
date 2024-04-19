/******************************************************************************

Crie um programa que diga se o número informado pelo usuário é primo ou não.


*******************************************************************************/
#include <stdio.h>

int ehPrimo(int num) {
    int i;

    if (num <= 1) {
        return 0;
    }

    for (i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0; 
        }
    }
    return 1; 
}

int main() {
    int num;

    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    if (ehPrimo(num)) {
        printf("%d é um número primo.\n", num);
    } else {
        printf("%d não é um número primo.\n", num);
    }

    return 0;
}
