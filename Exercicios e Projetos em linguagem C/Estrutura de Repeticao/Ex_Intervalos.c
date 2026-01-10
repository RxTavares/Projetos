/*Leia um valor inteiro N. Este valor será a quantidade de valores inteiros X que serão lidos em seguida.
Mostre quantos destes valores X estão dentro do intervalo [10,20] e quantos estão fora do intervalo*/
#include<stdio.h>

int main(){

int dentro,fora,N,i,x;

dentro = 0;
fora = 0;

printf("Quantidade de numeros: ");
scanf("%d",&N);

    for(i = 0; i < N ;i++){
        printf("Digite um numero: ");
        scanf("%d",&x);
        
     if( x >= 10 && x <= 20){
        dentro = dentro + 1;
    }else{
        fora = fora + 1;
    }
    }
    printf("%d dentro\n", dentro);
    printf("%d fora\n", fora);
}