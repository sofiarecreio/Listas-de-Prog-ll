#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL)); 
    
    int sorteado = rand() % 101;
    int num;
    int cont = 0;

    do {
        printf("Digite o número: ");
        scanf(" %d", &num);
        cont++;

        if (num < sorteado) {
            printf("O número sorteado é maior. Tente novamente.\n");
        } else if (num > sorteado) {
            printf("O número sorteado é menor. Tente novamente.\n");
        }

    } while (num != sorteado);

    printf("Parabéns! Você acertou!\n");
    printf("O número de tentativas foi: %d\n", cont);

    return 0;
}