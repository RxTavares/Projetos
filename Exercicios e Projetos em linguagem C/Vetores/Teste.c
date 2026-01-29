/*Faça um programa que leia N números inteiros e armazene-os em um vetor. Em seguida, mostre na
tela todos os números pares, e também a quantidade de números pares.*/

#include <stdio.h>

int main() {

    int N,i,qnt_pares,vet[100];

    printf("Quantos dados serao digitados: ");
    scanf("%d",&N);
    
    for(i = 0; i< N; i++){
        
        printf("Digite um numero: ");
        scanf("%d",&vet[i]);
}
    qnt_pares = 0;

    printf("Numeros pares: ");

    for(i = 0; i< N; i++){

    if( vet[i] % 2 == 0){
        
        printf("%d, ", vet[i]);

        qnt_pares = qnt_pares + 1;
    }
}
    printf(" \n Quantidade de pares = %d ",qnt_pares);
        

}
