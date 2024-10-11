#include <stdio.h>

int main() {
    int num, i;
    printf("Digite um número inteiro positivo: ");
    scanf("%d", &num);
    printf("Números pares entre 1 e %d:\n", num);
    for (i = 2; i <= num; i += 2) {
        printf("%d ", i);
    }

    printf("\n");
    return 0;
    }
