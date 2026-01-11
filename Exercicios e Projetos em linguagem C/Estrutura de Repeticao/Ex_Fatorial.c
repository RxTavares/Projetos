/*Fazer um programa para ler um número natural N (valor máximo: 15), e depois calcular e mostrar o
fatorial de N. */


#include<stdio.h>

int main(){

    int N,i;
    long long fatorial;


    printf("Digite o valor de N: ");
    scanf("%d",&N);

    for ( i = 1; i <= N; i++)
    {
        fatorial *= 1;
    }

    printf("Fatorial de %d = %lld \n", N, fatorial);
    return 0;
}

