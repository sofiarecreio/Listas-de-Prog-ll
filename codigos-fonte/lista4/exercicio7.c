#include <stdio.h>
#include <ctype.h>
#include <string.h>

void CamelCase(char *s)
{
    if (*s == '\0')
    {
        return;
    }

    int cap = 1;
    char *src = s;
    char *dest = s;

    while (*src != '\0')
    {
        if (*src == ' ')
        {
            cap = 1;
        } else
        {
            if (cap)
            {
                *dest = toupper(*src);
                dest++;
                cap = 0;
            } else
            {
                *dest = *src;
                dest++;
            }
            
            
        }
        
        src++;
        
    }

    *dest = '\0';
    
}

int main()
{
    char s[20] = "media da turma";
    
    printf("String original: %s\n", s);
    CamelCase(s);
    printf("String em CamelCase: %s\n", s);

    return 0;

}