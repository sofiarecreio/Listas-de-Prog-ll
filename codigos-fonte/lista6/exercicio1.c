#include <stdio.h>
#include <stdlib.h>

float *acima_da_media(int n, float *vet, int *tam);

int main()
{
    int n, tam;

    printf("Digite a quantidade de valores: ");
    scanf("%d", &n);

    float *vet = (float *)malloc(n * sizeof(float));

    printf("Digite os valores:\n");
    for (int i = 0; i < n; i++) {
        scanf("%f", &vet[i]);
    }

    float *acima = acima_da_media(n, vet, &tam);

    printf("Valores acima da media: ");
    for (int i = 0; i < tam; i++)
    {
        printf("%.2f ", acima[i]);
    }
    printf("\n");

    free(vet);
    free(acima);

    return 0;
}

float *acima_da_media(int n, float *vet, int *tam)
{
    float media, soma = 0;
    int cont = 0;

    for (int i = 0; i < n; i++)
    {
        soma += vet[i]; 
    }
    
    media = soma / n; 

    for (int i = 0; i < n; i++)
    {
        if (vet[i] > media)
        {
            cont++;
        }
    }
    
    float *vetresposta = (float*) malloc(cont * sizeof(float));

    if (vetresposta == NULL)
    { 
        return NULL;
    }

    int index = 0;
    for (int i = 0; i < n; i++)
    {
        if (vet[i] > media)
        {
            vetresposta[index++] = vet[i];
        }
        
    }
    
    *tam = cont;

    return vetresposta;
}