/*Leia 2 valores inteiros X e Y (em qualquer ordem). A seguir, calcule e mostre a soma dos números
impares entre eles.*/

#include<stdio.h>

int main(){


    int x,y,troca,i,soma;

    printf("Digite dois numeros: \n");
    scanf("%d",&x);
    scanf("%d",&y);

    if (x > y){

        troca = x;
        x = y;
        y = troca;
    }

    soma = 0;

    for ( i = x + 1; i < y ; i++){

        if( i % 2 != 0){
            soma = soma + i;
        }

    }

    printf("Soma dos impares = %d",soma);



}