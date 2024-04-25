#include <stdio.h>
int testa_PA (int n, int *v)
{
    int i, k;
    
    printf("Insira o tamanho do vetor: ");
    scanf("%d", &n);

    while (n < 3)
    {
        printf("Tamanho inválido! Tente Novamente: ");
        printf("Insira o tamanho do vetor: ");
        scanf("%d", &n);
    }

    for (i = 0; i < n; i++)
    {
        printf("Insira o valor %d do vetor: ", i);
        scanf("%d", &v[i]);
    }
    
    k = v[1] - v[0];
    for (i = 0; i < n; i++)
    {
        if (v[i] != v[0] + k * i)
        {
            return 0;
        }
        
        return k;
    }
     
}