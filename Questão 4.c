#include <stdio.h>

void selectionSortDesc(float arr[], int n) {
    int i, j;
    float temp;
     for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[j] > arr[i]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    int n, i;
    printf("Digite o numero de alunos: ");
    scanf("%d", &n);

    float notas[n];
     printf("Digite as notas dos alunos:\n");
    for (i = 0; i < n; i++) {
        scanf("%f", &notas[i]);
    }
    selectionSortDesc(notas, n);
    printf("Notas dos alunos em ordem decrescente:\n");
    for (i = 0; i < n; i++) {
        printf("%.2f ", notas[i]);
    }

    printf("\n");

    return 0;
}
