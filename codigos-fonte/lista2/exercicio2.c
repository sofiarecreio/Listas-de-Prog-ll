#include <stdio.h>

int main()
{
    int num, soma = 0;

    printf("Digite o número: ");
    scanf("%d", &num);

    if (num <= 0) {
        printf("Por favor, dê um número positivo\n");
        return 1;
    }

    int impar = 1;

    for (int i = 0; i < num; i++) {
        soma += impar;
        impar += 2;
    }

    printf("A soma resultou em: %d\n", soma);

    return 0;
}