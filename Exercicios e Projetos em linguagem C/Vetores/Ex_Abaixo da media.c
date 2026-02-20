/*Fazer um programa para ler um número inteiro N e depois um vetor de N números reais. Em seguida,
mostrar na tela a média aritmética de todos elementos com três casas decimais. Depois mostrar todos
os elementos do vetor que estejam abaixo da média, com uma casa decimal cada. */
#include<stdio.h>

int main(){

int N,i;
float soma = 0,media;
float vet[100];

printf("Quantos elementos vai ter o vetor: ");
scanf("%d",&N);

for (i = 0; i < N; i++)
{
    printf("Digite um numero: ");
    scanf("%f",&vet[i]);
}

for ( i = 0; i < N; i++)
{
    soma = soma + vet[i];
}
media = soma / N;

printf("Media do vetor = %.2f\n",media);

printf("Elementos abaixo da media: \n");
for ( i = 0; i < N; i++)
{
    if (vet[i] < media)
    {
        printf("%.2f\n",vet[i]);
    }  
}
return 0;
}