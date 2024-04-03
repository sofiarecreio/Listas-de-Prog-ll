#include <stdio.h>
#include <math.h>

int main()
{
    float num, cima, baixo;

    printf("Insira o número: ");
    scanf("%f", &num);

    cima = ceil(num);
    printf("Arrendodamento para cima de %.1f: %.1f\n", num, cima);

    baixo = floor(num);
    printf("Arredondamento pra baixo de %.1f: %.1f\n", num, baixo);

    return 0;
}