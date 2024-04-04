#include <stdio.h>
#include <stdlib.h>

int main() {
    int vetor[10]; // Vetor com 10 posições
    int i;

    printf("Insira 10 números:\n");
    for (i = 0; i < 10; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("\nValores inseridos:\n");
    for (i = 0; i < 10; i++) {
        printf("%d\n", vetor[i]);
    }

    return 0;
}
