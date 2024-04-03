#include <stdio.h>
#include <math.h>

void calculo(float a, float b, float c) {
    float delta, x1, x2;

    delta = b * b - (4 * a * c);

    if (delta > 0) {
        x1 = (-b + sqrt(delta)) / (2 *a);
        x2 = (-b + sqrt(delta)) / (2 *a);
        printf("As raízes são: %.2f e %.2f\n", x1, x2);
    } else if (delta ==0) {
        x1 = -b / (2 * a);
    } else {
        printf("As raízes são complexas"); 
    }
}

int main()
{
    float a, b, c;

    printf("Digite os coeficientes (a, b, c): ");
    scanf("%f %f %f", &a, &b, &c);

    calculo(a, b, c);

    return 0;
}