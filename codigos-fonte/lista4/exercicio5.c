#include <stdio.h>

void calcula_corrida(float dist, float *b1, float *b2)
{
    float inicial = 4.95;
    float b1km = 2.5;
    float b2km = 3;

    *b1 = inicial + (b1km * dist);
    *b2 = inicial + (b2km * dist);

}

int main() {
    float distancia, bandeira1, bandeira2;
    
    printf("Digite a distância percorrida em quilômetros: ");
    scanf("%f", &distancia);
    
    calcula_corrida(distancia, &bandeira1, &bandeira2);
    
    printf("Valor na bandeira 1: R$%.2f\n", bandeira1);
    printf("Valor na bandeira 2: R$%.2f\n", bandeira2);
    
    return 0;
}