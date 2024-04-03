#include <stdio.h>

int main(void)
{
    char op;
    float num1, num2, resultado;

    printf("Digite o símbolo da operação (+, -, / ou *): ");
    scanf(" %c", &op); 

    printf("Digite os dois números: ");
    scanf("%f %f", &num1, &num2);

    switch(op) {
        case '+':
            resultado = num1 + num2;
            break;
        case '-':
            resultado = num1 - num2;
            break;
        case '/':
            if (num2 != 0)
                resultado = num1 / num2;
            else {
                printf("Erro: Divisão por zero não é permitida.\n");
                return 1; 
            }
            break;
        case '*':
            resultado = num1 * num2;
            break;
        default:
            printf("Erro: Operação inválida.\n");
            return 1; 
    }

    printf("Resultado: %.2f\n", resultado);

    return 0;
}