#include <stdio.h>

unsigned int inverte(unsigned int num);

int main() {
    unsigned int num, invertido;

    printf("Digite um número: ");
    scanf("%u", &num);

    invertido = inverte(num);

    printf("Número invertido: %u\n", invertido);

    return 0;
}

unsigned int inverte(unsigned int num) {
    unsigned int invertido = 0;

    while (num > 0) {
        invertido = invertido * 10 + (num % 10);
        num /= 10;
    }

    return invertido;
}