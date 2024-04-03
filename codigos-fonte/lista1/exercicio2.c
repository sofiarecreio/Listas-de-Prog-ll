#include <stdio.h>

int main(void)
{
    int num1, num2, num3;
    int maior, menor, soma, cont;
    float media;

    printf("Digite os números: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    maior = menor = num1;
    soma = cont = 0;

    if (num2 > maior)
        maior = num2;
    if (num3 > maior)
        maior = num3;

    if (num2 < menor)
        menor = num2;
    if (num3 < menor)
        menor = num3;

    soma = num1 + num2 + num3;

    if (num1 % 2 == 0 || num2  % 2 == 0 || num3 % 2 == 0)
        cont++;

    media = (float)soma / 3;

    printf("O maior número é: %d\n", maior);
    printf("O menor número é: %d\n", menor);
    printf("A média dos números é: %.2f\n", media);
    printf("Os valores pares são: ");
    
    if (num1 % 2 == 0)
        printf("%d ", num1);
    if (num2 % 2 == 0)
        printf("%d ", num2);
    if (num3 % 2 == 0)
        printf("%d ", num3);

    return 0;
}