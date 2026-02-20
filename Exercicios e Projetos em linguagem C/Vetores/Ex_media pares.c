/*Fazer um programa para ler um vetor de N números inteiros. Em seguida, mostrar na tela a média
aritmética somente dos números pares lidos, com uma casa decimal. Se nenhum número par for
digitado, mostrar a mensagem "NENHUM NUMERO PAR"*/

#include<stdio.h>

int main(){


int N,i,vet[100];
float media;
float soma = 0;
float contador = 0;

printf("Quantos numeros vat ter o vetor: ");
scanf("%d",&N);

for ( i = 0; i < N; i++)
{
printf("Digite um numero: ");
scanf("%d",&vet[i]);

}
for ( i = 0; i < N; i++)
{

if(vet[i] % 2 == 0)
{
    soma = soma + vet[i];
    contador++;
}
}

if(contador > 0)
{
    media = soma / contador;
    printf("Media dos pares: %.2f\n", media);
}
else
{
    printf("Nenhum numero par!\n");
}

return 0;
}