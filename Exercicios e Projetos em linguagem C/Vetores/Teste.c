#include <stdio.h>

int main() {

    int N, i;
    int idade[100];
    char nome[100][50];
    float altura[100];

    float soma = 0, media;
    int cont = 0;
    float porcent;

    printf("\n Quantos dados serao digitados: ");
    scanf("%d", &N);

    for (i = 0; i < N; i++) {
        printf("Dados da %da pessoa:\n", i + 1);

        printf("Nome: ");
        scanf("%s", nome[i]);

        printf("Idade: ");
        scanf("%d", &idade[i]);

        printf("Altura: ");
        scanf("\n%f", &altura[i]);
    }

    for (i = 0; i < N; i++) {
        soma += altura[i];
    }
    media = soma / N;
    printf("Altura media: %.2f\n", media);

    for (i = 0; i < N; i++) {
        if (idade[i] < 16) {
            cont++;
        }
    }
    porcent = (cont * 100.0) / N;
    printf("Pessoas com menos de 16 anos: %.2f%%\n", porcent);

    for (i = 0; i < N; i++) {
        if (idade[i] < 16) {
            printf("%s\n", nome[i]);
        }
    }
    return 0;
}
