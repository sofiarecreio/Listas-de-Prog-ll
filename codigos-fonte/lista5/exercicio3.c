#include <stdio.h>

int conta(char *s, char ch);

int main()
{
    char s[101];
    char ch;

    printf("Insira a string com máximo de 100 caracteres: ");
    scanf("%100[^\n]", s);

    printf("Agora digite o caracter que deseja contar: ");
    scanf(" %c", &ch);

    int resultado = conta(s, ch);

    if (resultado != 0)
    {
        printf("O caractere '%c' aparece %d vezes na string", ch, resultado);
    } else
    {
        printf("O caractere não aparece na string");
    }
    
    return 0;
    
}

int conta(char *s, char ch)
{
    int cont = 0;

    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == ch)
        {
            cont++;
        }
        
    }

    return cont;
    
}