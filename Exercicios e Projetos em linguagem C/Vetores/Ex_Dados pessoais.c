/*Tem-se um conjunto de dados contendo a altura e o gênero (M, F) de N pessoas. Fazer um programa
que calcule e escreva a maior e a menor altura do grupo, a média de altura das mulheres, e o número
de homens.*/

#include<stdio.h>
int main(){

float altura[100];
char genero[100];
int N,i;

    printf("Quantos dados serao digitados: ");
    scanf("%d",&N);

    for (int i = 0; i < N; i++)
    {
        printf("\n Dados da %da pessoa\n",i+1);
        
        printf("Altura: ");
        scanf("%f",&altura[i]);

        printf("Genero (M/F): ");
        scanf(" %c",&genero[i]);
    }

    float maiorAltura = altura[0];
    float menorAltura = altura[0];
    
    for (i = 1; i < N; i++)
    {
        if(altura[i] > maiorAltura)
            maiorAltura = altura[i];

        if(altura[i] < menorAltura)
            menorAltura = altura[i];
    }
    
    printf("Menor altura = %.2f\n",menorAltura);
    printf("Maior altura = %.2f\n",maiorAltura);

     int contM = 0;
     float soma = 0;
    
    for ( i = 0; i < N; i++)
    {
        if(genero[i] == 'F'){
        soma += altura[i];
        contM++;
        }
    }

    if( contM == 0){
        printf("Impossivel calcular a altura media das mulheres!\n");
    }else{
         float media = soma / contM;
        printf("Media das alturas das mulheres = %.2f\n",media);
    }

    int contH = N - contM;
    printf("Quantidade de homens = %d\n",contH);
return 0;
}