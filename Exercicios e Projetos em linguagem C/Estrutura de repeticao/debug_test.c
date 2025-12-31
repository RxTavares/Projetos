#include <stdio.h>

int main() {
    int i, sum = 0;
    printf("Iniciando debug test\n");

    for (i = 1; i <= 10; i++) {
        sum += i;
        printf("i = %d, sum = %d\n", i, sum);
    }

    printf("Soma final: %d\n", sum);
    return 0;
}