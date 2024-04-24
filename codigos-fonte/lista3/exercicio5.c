#include <stdio.h>

float max_vet(int n, float * vet);

int main() {
    int n, i;

    printf("Insira o tamanho do vetor: ");
    scanf("%d", &n);

    float vet[n], maior;

    for (i = 0; i < n; i++) {
        printf("Insira o valor %d: ", i);
        scanf("%f", &vet[i]);
    }

    maior = max_vet(n, vet);

    printf("O maior valor é: %.2f\n", maior);

    return 0;
}

float max_vet(int n, float *vet) {
    int i;
    float maior = vet[0];

    for (i = 1; i < n; i++) {
        if (vet[i] > maior) {
            maior = vet[i];
        }
    }

    return maior;
    
}