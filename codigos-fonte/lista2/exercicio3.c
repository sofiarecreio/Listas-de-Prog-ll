#include <stdio.h>

int main() {
    int n, termo1 = 1, termo2 = 1, atual;
    
    printf("Digite o número de termos: ");
    scanf("%d", &n);
    
    if (n <= 0) {
        printf("Por favor, forneça um número positivo.\n");
        return 1;
    }
    
    printf("Os %d primeiros termos são: ", n);
    
    printf("%d %d ", termo1, termo2);
    
    for (int i = 3; i <= n; i++) {
        atual = termo1 + termo2;
        printf("%d ", atual);
        termo1 = termo2;
        termo2 = atual;
    }
    
    printf("\n");
    
    return 0;
}