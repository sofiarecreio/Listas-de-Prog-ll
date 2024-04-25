#include <stdio.h>

void ler(int *vet);

void imprime(int *vet);

int pesquisa(int *vet, int x);

void troca(int *vet);

int main() {
    int vet[7];
    ler(vet);

    imprime(vet);

    int x;
    
    printf("Digite um valor: ");
    scanf("%d", &x);

    int posicao = pesquisa(vet, x);
    if (posicao != -1) {
        printf("O valor %d foi encontrado na posição %d\n", x, posicao);
    } else {
        printf("O valor %d não foi encontrado\n", x);
    }

    troca(vet);
    imprime(vet);

    return 0;
}

void ler(int *vet) 
{
    printf("Digite 7 valores:\n");
    
    for (int i = 0; i < 7; i++) {
        scanf("%d", &*(vet + i));
    }
}

void imprime(int *vet) 
{
    printf("Conteúdo do vet:\n");

    for (int i = 0; i < 7; i++) {
        printf("Posição %d: %d\n", i, *(vet + i));
    }
}

int pesquisa(int *vet, int x) 
{
    for (int i = 0; i < 7; i++) {
        if (*(vet + i) == x) {
            return i;
        }
    }

    return -1; 
}

void troca(int *vet) 
{
    int aux[7];

    aux[0] = *vet; 
    for (int i = 1; i < 7; i++) {
        aux[i] = aux[i - 1] + *(vet + i);
    }
    for (int i = 0; i < 7; i++) {
        *(vet + i) = aux[i];
    }
}