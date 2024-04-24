#include <stdio.h>

int main() {
    int a = 12, b = 23, c = 34, d = 45;
    float e = 12.12, f = 23.23, g = 34.34, h = 45.45;
    char v[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    int x = 56;

    int *ap = &a;

    for (int i = 0; i < 10; i++) {
        printf("Endereço apontado: %p\n", (void *)ap);
        printf("Conteúdo do endereço apontado: %d\n", *ap);

        if ((void *)ap == (void *)&b) {
            printf("O endereço apontado coincide com o endereço de b.\n");
        }
        if ((void *)ap == (void *)&c) {
            printf("O endereço apontado coincide com o endereço de c.\n");
        }
        if ((void *)ap == (void *)&d) {
            printf("O endereço apontado coincide com o endereço de d.\n");
        }
        if ((void *)ap == (void *)&e) {
            printf("O endereço apontado coincide com o endereço de e.\n");
        }
        if ((void *)ap == (void *)&f) {
            printf("O endereço apontado coincide com o endereço de f.\n");
        }
        if ((void *)ap == (void *)&g) {
            printf("O endereço apontado coincide com o endereço de g.\n");
        }
        if ((void *)ap == (void *)&h) {
            printf("O endereço apontado coincide com o endereço de h.\n");
        }
        if ((void *)ap == (void *)&x) {
            printf("O endereço apontado coincide com o endereço de x.\n");
        }

        for (i = 0; i < 10; i++)
        {
            if ((void *)ap == (void *)&v[i]) {
               printf("O endereço apontado coincide com o endereço de v[%d].\n", i);
            }
        }
        
        ap++;
    }

    return 0;
}