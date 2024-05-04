#include <stdio.h>
#include <stdlib.h>

int *aprovados(int n, int *mat, float *notas, int *tam);

int main()
{
    int n, tam;

    printf("Digite a quantidade de alunos: ");
    scanf("%d", &n);

    int *mat = (int *) malloc(n * sizeof(int));
    float *notas = (float *)malloc(n * sizeof(float));

    printf("Digite as matrículas dos alunos:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &mat[i]);
    }

    printf("Digite as notas:\n");
    for (int i = 0; i < n; i++) {
        scanf("%f", &notas[i]);
    }

    int *matri = aprovados(n, mat, notas, &tam);

    printf("Matrículas dos alunos aprovados:\n");
    for (int i = 0; i < tam; i++) {
        printf("%d ", matri[i]);
    }
    printf("\n");

    free(mat);
    free(notas);
    free(matri);

    return 0;
}

int *aprovados(int n, int *mat, float *notas, int *tam)
{
    int cont = 0;

    for (int i = 0; i < n; i++)
    {
        if (notas[i] >= 5)
        {
            cont++;
        }
    }
    
    int *matri = (int *)malloc(cont * sizeof(int));

    if (matri == NULL) {
        return NULL; 
    }

    int index = 0;

    for (int i = 0; i < cont; i++)
    {
        if (notas[i] >= 5)
        {
            matri[index++] = mat[i];
        }
        
    }
    
    *tam = cont;

    return matri;
}