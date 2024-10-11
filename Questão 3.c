#include <stdio.h>

void insertionSort(float arr[], int n) {
    int i, j;
    float key;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
    }
int main() {
    int n, i;
     printf("Digite o número de produtos: ");
    scanf("%d", &n);

    float precos[n];
     printf("Digite os preços dos produtos:\n");
    for (i = 0; i < n; i++) {
        scanf("%f", &precos[i]);
    }
    insertionSort(precos, n);
    printf("Lista de preços ordenada:\n");
    for (i = 0; i < n; i++) {
        printf("%.2f ", precos[i]);
    }

    printf("\n");

    return 0;
    }