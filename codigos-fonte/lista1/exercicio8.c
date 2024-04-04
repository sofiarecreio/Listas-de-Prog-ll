#include <stdio.h>

int total_de_notas(int valor);

int main()
{
    int valor;

    printf("Digite o valor em reais: ");
    scanf("%d", &valor);

    int total = total_de_notas(valor);
    printf("O total de notas foi de: %d\n", total);

    return 0;
}

int total_de_notas(int valor) {
    int notas[7] = {100, 50, 20, 10, 5, 2 , 1};
    int cont = 0;

    printf("Notas necessárias:\n");

    for (int i = 0; i < 7; i++) {
        if(valor >= notas[i]) {
            cont += valor / notas[i];
            printf("%d nota(s) de R$%d\n", valor / notas[i], notas[i]);
            valor %= notas[i];
        }
    }

    return cont;
}