#include <stdio.h>
#include <conio.h>

#define MAX_FRASE 80

int main() {
    char frase[MAX_FRASE];
    int index = 0;
    char ch;

    printf("Digite uma frase (máx. 80 caracteres):\n");

    while ((ch = getch()) != '\r' && index < MAX_FRASE - 1) {
        frase[index] = ch;
        putchar(ch); 
        index++;
    }

    frase[index] = '\0'; 

    printf("\nPalavras da frase:\n");

    int i = 0;
    while (frase[i] != '\0') {
        while (frase[i] == ' ') {
            i++;
        }

        while (frase[i] != ' ' && frase[i] != '\0') {
            putchar(frase[i]);
            i++;
        }
        printf("\n");
    }

    return 0;
}