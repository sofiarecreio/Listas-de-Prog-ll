#include <stdio.h>

int compara(char *s1, char *s2);

void cadastra(char *nome, char *senha);

int main()
{
    char nome[9];
    char senha[9];

    printf("Cadastro inicial: \n");
    cadastra(nome, senha);

    printf("Cadastro realizado com sucesso");

    printf("\nLogin: \n");

    char novonome[9];
    char novasenha[9];

    printf("Digite o novo nome: ");
    
    int i = 0;
    char ch;
    
    while ((ch = getchar()) != '\n' && i < 8)
    {
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9'))
        {
            novonome[i++] = ch;
            printf("%c", ch);
        }
        
    }
    novonome[i] = '\0';

    printf("\nDigite a nova senha: ");

    i = 0;
    while ((ch = getchar()) != '\n' && i < 8)
    {
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9'))
        {
            novasenha[i++] = ch;
            printf("*");
        }
        
    }
    novasenha[i] = '\0';
    printf("\n");

    if (compara(nome, novonome) && compara(senha, novasenha))
    {
        printf("OK");
    } else
    {
        printf("Acesso negado!");
    }
    
    return 0;
    
}

int compara(char *s1, char *s2)
{
    while (*s1 && *s2)
    {
        if (*s1 != *s2)
        {
            return 0;
        }
        s1++;
        s2++;
    }
    
    return *s1 == *s2;

}

void cadastra(char *nome, char *senha)
{
    printf("Insira o nome com máximo de 8 caracteres: ");
    int i = 0;
    char ch;

    while ((ch = getchar()) != '\n' && i < 8)
    {
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9'))
        {
            nome[i++] = ch;
            printf("%c", ch);
        }
        
    }
    
    nome[i] = '\0';

    printf("\nInsira a senha com máximo de 8 caracteres: ");
    i = 0;

    while ((ch = getchar()) != '\n' && i < 8)
    {
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9'))
        {
            senha[i++] = ch;
            printf("*");
        }
        
    }

    senha[i] = '\0';
    printf("\n");
}