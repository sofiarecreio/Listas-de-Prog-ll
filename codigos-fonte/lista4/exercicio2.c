#include <stdio.h>

int main()
{
    int vr[5], vs[10], vx[5];
    int i, j, k;
    int encontrado;

    for ( i = 0; i < 5; i++)
    {
        printf("Elemento %d do vetor R: ", i);
        scanf("%d", &vr[i]);
    }

    for ( i = 0; i < 10; i++)
    {
        printf("Elemento %d do vetor S: ", i);
        scanf("%d", &vs[i]);
    }

    for ( i = 0; i < 5; i++)
    {
        encontrado = 0;
        for (j = 0; j < 10; j++)
        {
            if (vr[i] == vs[j])
            {
                encontrado = 1;
                for (int m = 0; m < k; m++)
                {
                    if (vr[i] == vx[m])
                    {
                        encontrado = 0;
                        break;
                    }
                    
                }
                if (encontrado)
                {
                    vx[k++] = vr[i];
                }
                
                break;
            }
            
        }
        
    }
    
        
    printf("Vetor X:\n");
    for (i = 0; i < k; i++) {
        printf("%d ", vx[i]);
    }

    return 0;
}