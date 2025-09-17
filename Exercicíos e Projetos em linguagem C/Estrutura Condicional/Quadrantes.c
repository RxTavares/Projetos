#include<stdio.h>

int main(){

    int x,y;

    printf("Digite o valor de x: ");
    scanf("%d",&x);

    printf("Digite o valor de y: ");
    scanf("%d",&y);

    if( (x > 0) && (y > 0)){
        printf("Quadrante Q1!");

    }else if((x < 0) && (y > 0)){
        printf("Quadrante Q2!");

    }else if ((x < 0) && (y < 0)){
        printf("Quadrante Q3!");

    }else if( (x > 0) && (y < 0)){
        printf("Quadrante Q4!");
    }else {
        printf("Origem!");
    }

  return 0;  
}