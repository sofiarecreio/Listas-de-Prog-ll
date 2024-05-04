#include <stdio.h>
#include <stdlib.h>

int *premiados(int n, int *inscr, float *t1, int p1, float *t2, int p2, int *tam);

int main()
{
    int n;

    printf("Digite a quantidade de participantes: ");
    scanf("%d", &n);

    int *inscr = (int *)malloc(n * sizeof(int));
    float *t1 = (float *)malloc(n * sizeof(float));
    float *t2 = (float *)malloc(n * sizeof(float));

    printf("Digite as inscrições dos participantes:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &inscr[i]);
    }

    printf("Digite as notas do primeiro teste:\n");
    for (int i = 0; i < n; i++) {
        scanf("%f", &t1[i]);
    }

    printf("Digite as notas do segundo teste:\n");
    for (int i = 0; i < n; i++) {
        scanf("%f", &t2[i]);
    }

    int p1, p2, tam;
    printf("Digite o peso do primeiro teste: ");
    scanf("%d", &p1);
    printf("Digite o peso do segundo teste: ");
    scanf("%d", &p2);

    int *premios = premiados(n, inscr, t1, p1, t2, p2, &tam);

    printf("Inscrições dos participantes premiados:\n");
    for (int i = 0; i < tam; i++) {
        printf("%d ", premios[i]);
    }
    printf("\n");

    free(inscr);
    free(t1);
    free(t2);
    free(premios);

    return 0;
}

int *premiados(int n, int *inscr, float *t1, int p1, float *t2, int p2, int *tam)
{
    float *media = (float *) malloc(n * sizeof(float));

    if (media == NULL)
    { 
        printf("Memória insuficiente!");
        return NULL;
    }

    for (int i = 0; i < n; i++)
    {
        media[i] = ((t1[i] * p1) + (t2[i] * p2)) / (p1 + p2);
    }
    
    float maior = media[0];
    for (int i = 0; i < n; i++)
    {
        if (media[i] > maior)
            maior = media[i];  
    }

    int cont = 0;
    for (int i = 0; i < n; i++)
    {
        if (media[i] == maior)
            cont++;
    }
    
    int *premiados = (int *)malloc(cont * sizeof(int));
    int index = 0;

    for (int i = 0; i < n; i++)
    {
        if (media[i] = maior)
        {
            premiados[index++] = inscr[i];
        }
    }
    
    *tam = cont;

    free(media);

    return premiados;    
}