#include <stdio.h>

#define PI 3.14159265

void calc_circulo(float r, float * circunferencia, float * area);

int main ()
{
    float r, circ, a;

    printf("Digite o raio: ");
    scanf("%f", &r);

    calc_circulo(r, &circ, &a);

    printf("A área é: %.2f, e a circunferência é: %.2f", circ, a);

    return 0;
}

void calc_circulo(float r, float * circunferencia, float * area)
{
    *area = PI * r * r;
    *circunferencia = 2 * PI * r;
}
