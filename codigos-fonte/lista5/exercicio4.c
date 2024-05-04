#include <stdio.h>

int main()
{
    char s[101];
    char p, u;
    int n = 0;

    printf("Insira uma palavra: ");
    scanf("%100[^\n]", s);

    p = s[0];

    for (int i = 0; s[i] != '\0'; i++)
    {
        u = s[i];
        n++;
    }

    printf("A primeira letra é: %c\n", p);
    printf("A última letra é: %c\n", u);
    printf("O número de letras é de: %d", n);

    return 0;
}