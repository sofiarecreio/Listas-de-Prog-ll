#include <stdio.h>
#include <ctype.h>

void abreviar(char *nome);

int main() {
    char completo[101];

    printf("Digite o nome completo: ");
    scanf("%100[^\n]", completo);

    abreviar(completo);

    printf("Abreviatura: %s\n", completo);

    return 0;
}

void abreviar(char *nome) {
    int i = 0, j = 0;
    char abv[50];
    int p = 1;

    abv[0] = toupper(nome[0]);

    while (nome[i] != '\0') {
        if (nome[i] == ' ') {
            p = 1;
        } else {
            if (p) {
                if (j > 0)
                    abv[j++] = '.';
                abv[j++] = toupper(nome[i]); 
                p = 0;
            }
        }
        i++;
    }

    abv[j] = '\0';

    for (i = 0; abv[i] != '\0'; i++) {
        nome[i] = abv[i];
    }
    nome[i] = '\0';
}