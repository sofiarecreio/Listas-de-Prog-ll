#include <stdio.h>

float media(int n, float *altura);

float variancia (int n, float *altura, float m);

int main()
{
    int i, n, contm = 0, conth = 0;
    float m, v;

    printf("Insira a quantidade de pessoas: ");
    scanf("%d", &n);

    int idade[n];
    float altura[n];
    char sexo[n];

    for (i = 0; i < n; i++)
    {
        printf("Insira a idade da pessoa %d: ", i);
        scanf("%d", &idade[i]);

        printf("Insira a altura, em metros, da pessoa %d: ", i);
        scanf("%f", &altura[i]);

        printf("Insira o sexo da pessoa %d(m masculino e f feminino): ", i);
        scanf(" %c", &sexo[i]);

        if (sexo[i] == 'f' && idade[i] >= 20 && idade[i] <= 35)
            contm++;

        if (sexo[i] == 'm' && altura[i] > 1.8)
            conth++;
    }

    m = media(n, altura);
    v = variancia(n, altura, m);

    printf("Há %d mulheres entre 20 e 35 anos\n", contm);
    printf("Há %d homens maiores que 1.80 metros\n", conth);
    printf("A variância é: %.2f", v);

    return 0;
}

float media (int n, float *altura)
{
    int i;
    float soma = 0.0;
    for (i = 0; i < n; i++)
        soma = soma + altura[i]; 
    return soma/n;
}

float variancia (int n, float *altura, float m)
{
    int i;
    float soma = 0.0;

    for (i = 0; i < n; i++)
        soma += (altura[i] - m) * (altura[i] - m);
        
    return soma/n;
}