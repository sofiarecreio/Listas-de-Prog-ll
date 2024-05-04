#include <stdio.h>
#include <ctype.h>

void contar(char *s, int *n);

int main() 
{
    char s[101];
    int n = 0;
    
    printf("Insira a string (máximo de 100 caracteres): ");
    scanf("%100[^\n]", s);

    contar(s, &n);
    
    printf("O número de vogais na string foi de: %d", n);

    return 0;
}

void contar(char *s, int *n) 
{
    *n = 0;
    
    for (int i = 0; s[i] != '\0'; i++)
    {
        char ch = tolower(s[i]);

        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') 
            (*n)++;

    } 
}