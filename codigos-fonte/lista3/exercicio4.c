#include <stdio.h>

int divs(int n, int *max, int *min)
{
    if (n <= 1) {
        return 1;
    }

    *max = 1;
    *min = n;

    for(int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            *max = i;
            *min = n / i;
            return 1;
        }
    }

    return 0;
}

int main() {
    int num;
    int max, min;

    printf("Entre com um número: ");
    scanf("%d", &num);
    
    int resultado = divs(num, &max, &min);
    
    if (resultado == 0) {
        printf("%d é primo.\n", num);
    } else {
        printf("%d não é primo.", num);
    }
    
    return 0;
}