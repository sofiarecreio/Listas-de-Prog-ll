#include <stdio.h>

int main(void)
{
    int a;
    float b, c1, c2, c3;

    a = 3;
    b = a / 2.0;

    c1 = b + 3.1; 
    c2 = b + 3;   
    c3 = b + 3.1; 

    printf("Possíveis valores para 'c':\n");
    printf("1. c = %.1f\n", c1);
    printf("2. c = %.1f\n", c2);
    printf("3. c = %.1f\n", c3);

    //Se a = 3, então b = a / 2 = 3 / 2 = 1.5. E c = b + 3.1 = 0.9 + 3.1 = 4
    //Se a = 3, então b = a / 2 = 3 / 2 = 1.5. E c = b + 3.1 = 1.5 + 3.1 = 4.6
    //Se a = 3, então b = a / 2 = 3 / 2 = 1. E c = b + 3.1 = 1 + 3.1 = 4.1

    return 0;
}