#include <stdio.h>

float calculo(float nota1,  float nota2,  float nota3) {
    return (nota1 + nota2 + nota3) / 3;
}

int main()
{
    float nota1, nota2, nota3, media;

    printf("Digite as notas: ");
    scanf("%f %f %f", &nota1, &nota2, &nota3);

    if (nota1 < 0 || nota1 > 10 || nota2 < 0 || nota2 > 10 || nota3 < 0 || nota3 > 10) {
        printf("Erro: Notas inválidas.\n");
        return 1;
    }

    media = calculo(nota1, nota2, nota3);
    printf("Média: %.2f\n", media);

    if (media >= 6) { 
        printf("Aprovado(a)!\n");
    } else {
        printf("Reprovado(a)!\n");
    }
    
    if (media >=4 && media < 6) {
        printf("Direito a realizar VS!\n");
    }

    return 0;
}