#include<stdio.h>

int main(){

    int x,y;

    printf("Digite o valor de x: ");
    scanf("%d", &x);

    printf("Digite o valor de y: ");
    scanf("%d", &y);

    while( x != 0 && y != 0){

        if( x > 0 && y > 0 ){
            printf("\n Quadrante Q1 \n");
        }else if ( x < 0 && y > 0){
            printf(" \n Quadrante Q2\n");
        }else if( x < 0 && y < 0){
            printf(" \n Quadrante Q3 \n");
        }else if( x > 0 && y < 0 ){
            printf(" \n Quadrante Q4\n");
        }

        printf("Digite o valor de x:");
        scanf("%d", &x);

        printf("Digite o valor de y: ");
        scanf("%d", &y);
   
    }

    printf("Ponto de Origem! \n");
    printf("Programa encerrado!!");
        
        
    return 0;
    }
        
    




