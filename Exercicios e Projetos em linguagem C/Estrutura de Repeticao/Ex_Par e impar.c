/*Leia um valor inteiro N. Este valor será a quantidade de números inteiros que serão lidos em seguida.
Para cada valor lido, mostre uma mensagem dizendo se este valor lido é PAR ou IMPAR, e também
se é POSITIVO ou NEGATIVO. No caso do valor ser igual a zero (0), seu programa deverá imprimir
apenas NULO. 
*/


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
        }else{
        printf("Nulo\n");
        }
    }
    
    
return 0;
}