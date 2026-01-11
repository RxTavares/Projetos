/*Escreva um algoritmo que leia dois números e imprima o resultado da divisão do primeiro pelo
segundo. Caso não for possível, mostre a mensagem “DIVISAO IMPOSSIVEL”.*/

#include<stdio.h>

int main(){
    float x,N,D,i,divisao;

    printf("Digite o numero de casos: ");
    scanf("%f",&x);

    for ( i = 0; i < x; i++)
    {
        printf("Digite o numerador: ");
        scanf("%f",&N);

        printf("Digite o denominador: ");
        scanf("%f",&D);

        divisao = N/D;

        if(D == 0){
            printf("Divisao impossivel\n");
        }else{
    
        printf("\n Resultado: %.1f \n",divisao);
    }

    
}  
    
return 0;
}


