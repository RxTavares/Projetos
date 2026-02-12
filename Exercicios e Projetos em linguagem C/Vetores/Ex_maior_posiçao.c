/*Faça um programa que leia N números reais e armazene-os em um vetor. Em seguida, mostrar na tela 
o maior número do vetor (supor não haver valores iguais). Mostrar também a posição do maior elemento,
considerando a primeira posição como 0 (zero).*/

#include<stdio.h>
int main(){

int N,vet[100];
int maior,posicao;
int i;

printf("Quantos numeros serao digitados: ");
scanf("%d",&N);

for ( i = 0; i < N; i++)
{
    printf("Digite um numero: ");
    scanf("%d",&vet[i]);

}

    maior = vet[0];
    posicao = 0;

    for ( i = 1; i < N; i++)
    {
        if(vet[i] > maior){
            maior = vet[i];
            posicao = i;
        }
    }
    
    printf("O maior numero e: %d\n", maior);
    printf("A posicao do maior elemento e: %d", posicao);
    

}