#include <stdio.h>
#include <stdlib.h>

char *compactar(char *s);

int main()
{
    char s[101];

    printf("Digite uma string: ");
    scanf("%100[^\n]", s);

    char *compactada = compactar(s);

    printf("Cadeia compactada: \"%s\"\n", compactada);

    free(compactada); 

    return 0;
}

char *compactar(char *s)
{
    int inicio = 0, fim = 0, tam = 0;

    while (s[fim] != '\0') {
        fim++;
    }
    fim--;

    while (s[fim] == ' ')
    {
        fim--;
    }

    while (s[inicio] == ' ')
    {
        inicio++;
    }

    tam = fim - inicio + 1;

    char *novos = (char *)malloc((tam + 1) * sizeof(char));

    if (novos == NULL) {
        return NULL; 
    }
    
    for (int i = inicio; i <= fim; i++)
    {
        novos[i - inicio] = s[i];
    }
    novos[tam] = '\0';

    return novos;
    
}