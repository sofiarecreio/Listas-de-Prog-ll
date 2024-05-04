#include <stdio.h>
#include <string.h>

int main()
{

}

void verificar(char *p1, char *p2)
{
    int i = 0, j = 0;
    int igual = 1;
    int sub = 0;

    while (p1[i] != '\0' || p2[i] != '\0')
    {
        if (p1[i] != p2[i])
        {
            igual = 0;
            break;
        }
        i++;
        j++;
    }

    if (igual && p1[i] =='\0' && p2[i] == '\0')
    {
        printf("As palavras são iguais\n");
    } else
    {
        printf("As palavras não são iguais\n");
    }

    i = 0;
    
    while (p1[i] != '\0')
    {
        j = 0;
        if (p1[i] == p2[i])
        {
            int aux = i;

            while (p1[aux] == p2[j] && p1[aux] != '\0' && p2[j] != '\0')
            {
                aux++;
                j++;
            }
            
            if (p2[j] == '\0')
            {
                sub = 1;
                break;
            }
            
        }
        i++;
        
    }
    
    if (sub)
    {
        printf("A segunda palavra é uma substring da primeira");
    } else
    {
        printf("A segunda palavra não é uma substring da primeira");
    }
    
}

int main()
{
    char p1[101], p2[101];

    printf("Digite a primeira palavra: ");
    scanf("%s", p1);

    printf("Digite a segunda palavra: ");
    scanf("%s", p2);

    verificar(p1, p2);

    return 0;
}