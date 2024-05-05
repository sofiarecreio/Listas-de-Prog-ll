#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tam;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tam);

    int *vet = (int *) malloc(tam * sizeof(int));

    if (vet == NULL)
    {
        printf("Erro na alocação de memória");
        exit(1);
    }

    for (int i = 0; i < tam; i++) {
        printf("Digite o valor %d do vetor: ", i);
        scanf("%d", &vet[i]);
    }

    printf("Valores que se repetem no vetor: ");

    for (int i = 0; i < tam; i++)
    {
        for (int j = i + 1; j < tam; j++)
        {
            if (vet[i] == vet[j])
            {
                printf("%d ", vet[i]);
                break;
            }
            
        }
        
    }
    printf("\n");

    free(vet);
    
    return 0;
}