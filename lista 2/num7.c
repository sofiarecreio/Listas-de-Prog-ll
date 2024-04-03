#include <stdio.h>

int main(void)
{
    float horas, valor, salario;

    printf("Digite a quantidade de horas: ");
    scanf("%f", &horas);

    printf("Digite o valor da hora: ");
    scanf("%f", &valor);

    if (horas <= 40) {
        salario = horas * valor;
    } else if (horas <= 60) {
        salario = (40 * valor) + ((horas - 40) * valor * 1.5);
    } else {
        salario = (40 * valor) + (20 * valor * 1.5) + ((horas - 60) * valor * 2);
    }

    printf("O salário é: R$%.2f\n", salario);

    return 0;
}