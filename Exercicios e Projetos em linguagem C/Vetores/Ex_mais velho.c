/*Fazer um programa para ler um conjunto de nomes de pessoas e suas respectivas idades. Os nomes
devem ser armazenados em um vetor, e as idades em um outro vetor. Depois, mostrar na tela o nome
da pessoa mais velha. */

#include<stdio.h>

int main(){

int N,i;
int maior,idade[100],posMaior;
char nome[100][50];

printf("Quantos dados serao digitados: ");
scanf("%d",&N);

for (i = 0; i < N; i++)
{
    printf("Dados da %da pessoa : \n",i+1);
    
    printf("Nome: ");
    scanf("%s", nome[i]);

    printf("Idade: ");
    scanf("%d",&idade[i]);
    
}

maior = idade [0];
posMaior = 0;

for ( i = 1; i < N; i++)
{
    if ( idade [i] > maior){
        maior = idade[i];
        posMaior = i;}
}

printf("Pessoa mais velha : %s",nome[posMaior] );


















}