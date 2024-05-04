#include <stdio.h>

void inverter(char *s);

int main()
{
    char s[21];

    printf("Digite uma string de no máximo 20 caracteres: ");
    scanf(" %20[^\n]", s);

    inverter(s);

    printf("String invertida: %s", s);

    return 0;
}

void inverter(char *s)
{
    int tam = 0;

    while (s[tam] != '\0')
    {
        tam++;
    }
    
    for (int i = 0; i < tam / 2; i++)
    {
        char aux = s[i];
        s[i] = s[tam - i - 1];
        s[tam - i - 1] = aux;
    }
    
}