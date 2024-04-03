#include <stdio.h>

int main(void)
{
    int num;

    printf("Digite o número:\n");

    for (num = 1000; num <= 9999; num++) {
        int pt1 = num / 100; 
        int pt2 = num % 100; 

        if ((pt1 + pt2) * (pt1 + pt2) == num) {
            printf("%d\n", num);
        }
    }

    return 0;
}