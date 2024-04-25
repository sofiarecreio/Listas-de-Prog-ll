#include <stdio.h>
#include <string.h>

void remove_caractere(char *s, char ch);

int main() {
    char s[21], ch;

    printf("Insira a string com máximo de 20 caracteres: ");
    scanf("%20[^\n]", s);

    printf("Insira o caractere que será removido: ");
    scanf(" %c", &ch); 

    remove_caractere(s, ch);
    printf("Resultado: %s\n", s);

    return 0;
}

void remove_caractere(char *s, char ch) {
    int i, j;

    for (i = j = 0; s[i] != '\0'; i++) {
        if (s[i] != ch) {
            s[j++] = s[i];
        }
    }
    s[j] = '\0';
}