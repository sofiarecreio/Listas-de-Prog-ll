#include <stdio.h>
#include <ctype.h>
#include <string.h>

void contagem(char *s);

int main()
{
    char s[51];

    printf("Insira a string com máximo de 50 caracteres: ");
    scanf("%50[^\n]", s);

    contagem(s);

    return 0;
}

void contagem(char *s)
{
    int freq[256] = {0};
    int v;

    for (int i = 0; s[i] != '\0'; i++)
    {
        v = (int)s[i];
        freq[v]++;
    }
    
    printf("Estatística: \n");

    for (int i = 0; i < 256; i++)
    {
        if (freq[i] > 0)
        {
            printf("'%c'= %d\n", toupper((char)i), freq[i]);
        }
        
    }
    
}