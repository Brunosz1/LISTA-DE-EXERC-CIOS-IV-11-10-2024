#include <stdio.h>

void insertionSort(int arr[], int n) {
    int i, j, key;for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int buscaBinaria(int arr[], int n, int valor) {
    int inicio = 0, fim = n - 1;
    while (inicio <= fim) {
        int meio = inicio + (fim - inicio) / 2;

        if (arr[meio] == valor) {
             return meio;
        } else if (arr[meio] < valor) {
            inicio = meio + 1;
        } else {
            fim = meio - 1;
        }
    }

    return -1;
}

int main() {
    int n, i, valor, resultado;
    printf("Digite o numero de elementos: ");
    scanf("%d", &n);

    int arr[n];
     printf("Digite os elementos:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
insertionSort(arr, n);
printf("Digite o valor a ser pesquisado: ");
    scanf("%d", &valor);
    resultado = buscaBinaria(arr, n, valor);
     if (resultado != -1) {
        printf("Valor %d encontrado no indice %d.\n", valor, resultado);
    } else {
        printf("Valor %d não encontrado.\n", valor);
    }

    return 0;
}
     

    