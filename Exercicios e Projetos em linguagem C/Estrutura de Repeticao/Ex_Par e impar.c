#include<stdio.h>

int main(){


    int N,x,i;

    printf("Quantos numeros serao digitados: ");
    scanf("%d",&N);

    for(i = 0;i < N; i++){
        
        printf("Digite um numero: ");
        scanf("%d",&x);

        if(x < 0  && x % 2 == 0){
            printf("%d Par Negativo\n",x);

        }else if(x > 0  && x % 2 == 0){
            printf("%d Par Positivo\n",x);

        }else if( x > 0  && x % 2 != 0){
            printf("%d Impar Positivo\n",x);

        }else if(x < 0  && x % 2 != 0){
            printf("%d Impar Negativo\n",x);
        }
    }
    
    
return 0;
}