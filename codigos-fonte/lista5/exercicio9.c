#include <stdio.h>

int main()
{
    char nome[101];
    char end[101];
    char tel[21];
    char info[230];
    char *p = info;

    printf("Digite o nome: ");
    scanf("%100[^\n]", nome);
    while (getchar() != '\n'); 

    printf("Digite o endereço: ");
    scanf("%100[^\n]", end);
    while (getchar() != '\n'); 

    printf("Digite o telefone: ");
    scanf("%20[^\n]", tel);
    while (getchar() != '\n'); 

    int i = 0;
    while (nome[i] != '\0')
    {
        *p = nome[i];
        p++;
        i++;
    }
    *p = ' ';
    p++;

    i = 0;
    while (end[i] != '\0')
    {
        *p = end[i];
        p++;
        i++;
    }
    *p = ' ';
    p++;

    i = 0;
    while (tel[i] != '\0')
    {
        *p = tel[i];
        p++;
        i++;
    }
    *p = '\0';

    printf("Informações concatenadas: %s", info);

    return 0;
}