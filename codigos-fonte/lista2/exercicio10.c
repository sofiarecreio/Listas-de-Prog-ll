#include <stdio.h>

int mdc(int x, int y) {
    int resto;

    while (y != 0) {
        resto = x % y;
        x = y;
        y = resto;
    }

    return x;
}

int main() {
    int x, y;

    printf("Digite dois números:\n");
    printf("x: ");
    scanf("%d", &x);
    printf("y: ");
    scanf("%d", &y);

    int resultado = mdc(x, y);

    printf("O MDC de %d e %d é: %d\n", x, y, resultado);

    return 0;
}