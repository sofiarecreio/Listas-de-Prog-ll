#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL)); 
    
    char sorteada = 'a' + rand() % 26;
    char letra;

    do {
        printf("Digite a letra: ");
        scanf(" %c", &letra);

        if (letra < sorteada) {
            printf("A letra sorteada é maior. Tente novamente.\n");
        } else if (letra > sorteada) {
            printf("A letra sorteada é menor. Tente novamente.\n");
        }
    } while (letra != sorteada);

    printf("Parabéns! Você acertou!\n");

    return 0;
}