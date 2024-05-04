#include <stdio.h>
#include <stdlib.h>

char* cifra_cesar(char* msg);

int main()
{
    char msg[101];

    printf("Digite a mensagem: ");
    scanf("%100[^\n]", msg);

    char *novamsg = cifra_cesar(msg);

    printf("Mensagem codificada: %s", novamsg);

    free(novamsg);

    return 0;
}

char* cifra_cesar(char* msg)
{
    int tam = 0;
    char ch;

    while (msg[tam] != '\0')
    {
        tam++;
    }
    
    char *novamsg = (char *) malloc(tam * sizeof(char));

    if (novamsg == NULL)
    {
        printf("Erro de alocação de memória\n");
        exit(1);
    }
    
    for (int i = 0; i < tam; i++)
    {
        if ((msg[i] >= 'a' && msg[i] <= 'z') || (msg[i] >= 'A' && msg[i] <= 'Z'))
        {
            if (msg[i] >= 'a' && msg[i] <= 'z')
            {
                ch = 'a';
            } else
            {
                ch = 'A';
            }
            
            novamsg[i] = ((msg[i] - ch + 3) % 26) + ch;
        } else 
        {
            novamsg[i] = msg[i];
        }
        
    }

    novamsg[tam] = '\0';

    return novamsg;
    
}