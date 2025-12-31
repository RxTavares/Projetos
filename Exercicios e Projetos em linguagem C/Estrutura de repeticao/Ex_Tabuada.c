/*Leia um número inteiro N, daí mostrar na tela a tabuada de N para 1 a 10*/

#include<stdio.h>

int main(){

int x,mult,i;

printf("Digite o valor para qual voce deseja obter a tabuada: ");
scanf("%d",&x);

mult = 1;

for(i = 1; i < 11; ++i){

    mult = x * i;

    printf("%d * %d = %d \n",x,i,mult);
}

return 0;
}