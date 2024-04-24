#include <stdio.h>

float media(int n, float *v);

int main()
{
    int n, i;

    printf("Insira o tamanho do valor: ");
    scanf("%d", &n);

    float m, v[n];

    for (i = 0; i < n; i++)
    {
        printf("Insira o valor %d: ", i);
        scanf("%f", &v[i]);
    }

    m = media(n, v);
    
    printf("A média é: %.2f", m);

    return 0;
}

float media(int n, float *v)
{
    int i;
    float soma = 0.0;

    for (i = 0; i < n; i++)
    {
        soma += v[i];
    }

    return soma/n;
    
}