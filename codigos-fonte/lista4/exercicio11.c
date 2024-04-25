#include <stdio.h>

void ler(int *v);

void operacoes(int *v1, int *v2, char *op, int *result, int tam);

void imprime(int *v, int tam);

int main()
{
    int v1[20], v2[20];
    char op[20];
    int resultado[20];

    printf("Valores do primeiro vetor: \n");
    ler(v1);

    printf("Valores do segundo vetor: \n");
    ler(v2);

    printf("Insira as operações para cada posição do vetor: \n");

    for (int i = 0; i < 20; i++) {
        scanf(" %c", &op[i]); 
    }

    operacoes(v1, v2, op, resultado, 20);

    printf("Vetor resultado: \n");
    imprime(resultado, 20);

    return 0;
}

void ler(int *v)
{
    for (int i = 0; i < 20; i++)
    {
        printf("Insira o valor %d: ", i);
        scanf("%d", &v[i]);
    }
    
}

void operacoes(int *v1, int *v2, char *op, int *result, int tam)
{
    for (int i = 0; i < tam; i++)
    {
        switch (op[i])
        {
        case '+':
            result[i] = v1[i] + v2[i];
            break;
        case '-':
            result[i] = v1[i] - v2[i];
            break;
        case '*':
            result[i] = v1[i] * v2[i];
            break;
        case '/':
            if (v2[i] != 0) {
                    result[i] = v1[i] / v2[i];
                } else {
                    printf("Divisão por zero em %d\n", i);
                }
            break;
        default:
            printf("Operação inválida em %d\n", i);
            break;
        }
    }
    
}

void imprime(int *v, int tam)
{
    for (int i = 0; i < tam; i++)
    {
        printf("%d, ", v[i]);
    }

    printf("\n");
    
}