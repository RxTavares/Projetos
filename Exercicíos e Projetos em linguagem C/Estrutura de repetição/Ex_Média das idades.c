#include<stdio.h>

int main(){

    int soma = 0, cont = 0, idade;
    float media;

    printf("Digite as idades (valor negativo para parar):\n");
    scanf("%d", &idade);

    while (idade >= 0) {
        soma += idade;
        cont++;

        scanf("%d", &idade);
    }

    if (cont == 0) {
        printf("Impossível calcular!\n");
    } else {
        media = (float)soma / cont;
        printf("Media = %.2f\n", media);
    }

    return 0;
}