
/*Problema "negativos"
Faça um programa que leia um número inteiro positivo N (máximo = 10) e depois N números inteiros
e armazene-os em um vetor. Em seguida, mostrar na tela todos os números negativos lidos. */
#include<stdio.h>

int main(){

int v[10];
int N,i;

printf("Quantos numeros serao digitados: ");
scanf("%d",&N);

for ( i = 0; i < N; i++)
{
    printf("Digite um numero: ");
    scanf("%d",&v[i]);
}
printf("Numeros Negativos: \n"); 

    for ( i = 0; i < N; i++)
{
    if ( v[i] < 0){
    printf("%d,",v[i]);
}
}
}