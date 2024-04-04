#include <stdio.h>

void converter(int seg, int *hora, int *min, int *restante);

int main() {
    int seg, hora, min, restante;

    printf("Digite o número de segundos: ");
    scanf("%d", &seg);

    converter(seg, &hora, &min, &restante);

    printf("Horas: %d\n", hora);
    printf("Minutos: %d\n", min);
    printf("Segundos: %d\n", restante);

    return 0;
}

void converter(int seg, int *hora, int *min, int *restante) {
    *hora = seg / 3600;
    seg %= 3600;
    *min = seg / 60;
    *restante = seg % 60;
}