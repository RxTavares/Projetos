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