#include <stdio.h>
#include <math.h>

int main(void)
{
     int base, potencia;

    printf("Digite a base: ");
    scanf("%d", &base);

    printf("Digite a potência: ");
    scanf("%d", &potencia);

    double resultado = pow(base, potencia);

    printf("O resultado é:\n", resultado);

    return 0;
}