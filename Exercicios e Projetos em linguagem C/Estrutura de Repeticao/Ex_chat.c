#include <stdio.h>

int main() {
    int N, qtd;
    char tipo;
    int total = 0, coelho = 0, rato = 0, sapo = 0;
    double pc, pr, ps;

    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        scanf("%d %c", &qtd, &tipo);

        total += qtd;

        if (tipo == 'C') {
            coelho += qtd;
        } else if (tipo == 'R') {
            rato += qtd;
        } else if (tipo == 'S') {
            sapo += qtd;
        }
    }

    pc = (double)coelho / total * 100;
    pr = (double)rato / total * 100;
    ps = (double)sapo / total * 100;

    printf("Total: %d cobaias\n", total);
    printf("Total de coelhos: %d\n", coelho);
    printf("Total de ratos: %d\n", rato);
    printf("Total de sapos: %d\n", sapo);
    printf("Percentual de coelhos: %.2lf %%\n", pc);
    printf("Percentual de ratos: %.2lf %%\n", pr);
    printf("Percentual de sapos: %.2lf %%\n", ps);

    return 0;
}
