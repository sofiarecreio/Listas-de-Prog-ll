#include <stdio.h>

int verificar(int num);

int main()
{
    int num; 

    printf("Digite um número: ");
    scanf("%d", &num);

    if (verificar(num)) {
        printf("NÚMERO PRIMO\n");
    } else {
        printf("NÚMERO NÃO PRIMO\n");
    }

    return 0;
}

int verificar(int num) {
    if (num <=1) {
        return 0;
    }

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }

    return 1;

}