#include <stdio.h>
#include <stdlib.h>

int *repeticao(int *vet, int tam, int *n);

int main()
{
    int tam, n;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tam);

    int *vet = (int *)malloc(tam * sizeof(int));

    if (vet == NULL) {
        printf("Erro na alocação de memória!\n");
        exit(1);
    }

    for (int i = 0; i < tam; i++) {
        printf("Digite o valor %d do vetor: ", i);
        scanf("%d", &vet[i]);
    }

    int *resp = repeticao(vet, tam, &n);

    printf("Valores repetidos: ");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", resp[i]);
    }
    printf("\n");

    free(vet);
    free(resp);

    return 0;
    
}

int *repeticao(int *vet, int tam, int *n)
{
    int *rep = (int *)malloc(20 * sizeof(int));

    if (rep == NULL) {
        printf("Erro na alocação de memória!\n");
        exit(1);
    }

    int cont = 0;

    for (int i = 0; i < tam; i++) {
        int encontrado = 0;

        for (int j = i + 1; j < tam; j++) {
            if (vet[i] == vet[j]) {
                encontrado = 1;
                break;
            }
        }
        
        if (encontrado) 
        {
            int repetido = 0;
            for (int k = 0; k < cont; k++) 
            {
                if (vet[i] == rep[k]) 
                {
                    repetido = 1;
                    break;  
                }
            }
            if (!repetido) 
            {
                if (cont >= 20) {
                    printf("Número máximo de repetições atingido!\n");
                    break;
                }
                rep[cont++] = vet[i];
            }
        }
    }
    
    *n = cont;

    return rep;
}