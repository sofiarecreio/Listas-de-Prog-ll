#include <stdio.h>

int main()
{
    int vx[10];
    int vy[10];
    int i;

    for ( i = 0; i < 10; i++)
    {
        printf("Elemento %d do vetor X: ", i);
        scanf("%d", &vx[i]);
    }

    for ( i = 0; i < 10; i++)
    {
        vy[10 - i - 1] = vx[i];
    }

    printf("Vetor Y: \n");
    for ( i = 0; i < 10; i++)
    {
        printf("%d", vy[i]);
    }
    
    return 0;
    
}