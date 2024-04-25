#include <stdio.h>
#include <ctype.h>

int valida_mail(char *s)
{
    int cont = 0;
    char *p = s;

    if (*s == '\0')
    {
        return 0;
    }

    if ((*s < 'a' || *s > 'z') && (*s < '0' || *s > '9'))
    {
        return 0;
    }

    while (*p != '\0')
    {
        if (*p == '.') {
            if (*(p + 1) == '\0'|| *(p + 1) == '.')
                return 0;
        }
            else if ((*p < 'a' || *p > 'z') && (*p < '0' || *p > '9') && *p != '-' && *p != '_')
                return 0;

            if ((*p != '.' && *p != '-' && *p != '_'))
                cont++;
            
            p++;
              
    }
    
    if (cont < 2)
    {
        return 0;
    }
    
    if (*(p - 1) == '.')
    {
        return 0;
    }

    return 1;
    
}

int main()
{
    char email[65]; 
    printf("Digite o e-mail: ");
    scanf("%64s", email); 

    if (valida_mail(email)) {
        printf("O e-mail '%s' é válido.\n", email);
    } else {
        printf("O e-mail '%s' é inválido.\n", email);
    }

    return 0;
}