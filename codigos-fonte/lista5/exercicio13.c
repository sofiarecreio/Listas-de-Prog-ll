//O programa deve ser capaz de:
//1- Receber duas palavras do usuário.
//2- Copiar a segunda palavra para a primeira.
//3- Concatenar a segunda palavra à primeira.
//4- Informar o tamanho final da primeira palavra após as operações

#include <stdio.h>
#include <string.h>

int main()
{
    char s1[101], s2[101];

    printf("Digite a primeira palavra: ");
    scanf("%s", s1);
    printf("Digite a segunda palavra: ");
    scanf("%s", s2);

    strcpy(s1, s2);

    strcat(s1, s2);

    int tam = strlen(s1);

    printf("Palavra final: %s\n", s1);
    printf("Tamanho final da primeira palavra: %d\n", tam);

    return 0;

}