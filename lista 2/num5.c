#include <stdio.h>

int main(void)
{
    int x, z, soma = 0, cont = 0;

    printf("Digite X: ");
    scanf("%d", &x);

    printf("Digite Z: ");
    scanf("%d", &z);

    while (z <= x) {
        printf("Z precisa ser maior que X. Tente Novamente:");
        scanf("%d", &z);
    }

    while (soma <= z) {
        soma += x;
        x++;
        cont++;
    }
        
    printf("Resposta: %d\n", cont);

    return 0;
}