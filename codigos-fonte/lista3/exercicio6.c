#include <stdio.h>

int maiores(int n, int * vet, int x);

int main() {
    int n, x, maior;

    printf("Insira o tamanho do vetor: ");
    scanf("%d", &n);

    
    printf("Insira o valor de x: ");
    scanf("%d", &x);

    int i, vet[n];

    for(i = 0; i < n; i++) {  
    printf("Insira o valor %d: ", i);
    scanf("%d", &vet[i]);
    }

    maior = maiores(n, vet, x);

    printf("Há %d valores maiores que %d", maior, x);

    return 0;
    
}

int maiores(int n, int * vet, int x) {
    int i, cont = 0;

    for (i = 0; i < n; i++)
    {
        if (vet[i] > x)
        {
            cont++;
        }
        
    }
    
    return cont;
}
