
/* Leia uma quantidade indeterminada de duplas de valores inteiros X e Y. Escreva para cada X e Y uma
mensagem que indique se estes valores foram digitados em ordem crescente ou decrescente. O
programa deve finalizar quando forem digitados dois valores iguais*/

#include <stdio.h>

int main(){

    int x,y;

    printf("Digite dois Numeros: \n");
    scanf("%d",&x);
    scanf("%d",&y);

    while ( x != y){

        if( x < y ){
            printf("\n Crescente!");
        }else{
            printf("\n Decrescente!");
        }
        printf("\n\nDigite dois Numeros: \n");
        scanf("%d", &x);
        scanf("%d", &y);
    }     
}