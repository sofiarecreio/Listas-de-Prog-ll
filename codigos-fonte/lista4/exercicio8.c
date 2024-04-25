#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void preenche(int *v, int tam);

void imprime(int *v, int tam);

void percorre(int *v, int tam);

int main() {
    int tam;
    srand(time(NULL));

    printf("Insira o tamanho do vetor: ");
    scanf("%d", &tam);

    int v[tam]; 

    preenche(v, tam);

    printf("Vetor: ");
    imprime(v, tam);

    printf("\nPonteiros percorrendo: \n");
    percorre(v, tam);

    return 0;
}

void preenche(int *v, int tam) {
    for (int i = 0; i < tam; i++) {
        v[i] = rand() % 100;
    }
}

void imprime(int *v, int tam) {
    for (int i = 0; i < tam; i++) {
        printf("%d", v[i]);
        if (i < tam - 1) {
            printf(", ");
        }
    }
}

void percorre(int *v, int tam) {
    int *p1 = v;
    int *p2 = v + tam - 1;

    while (p1 < p2) {
        printf("%d - %d\n", *p1, *p2);
        p1++;
        p2--;
    }
}