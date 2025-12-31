#include<stdio.h>
#include<stdlib.h>

int main(void){

    int x, *ptrx, **pptrx;

    x = 0;//inicializando com a variavel 0

    printf("\n Valor de x = %d\n",x);
     printf("Endereco de x: %x \n\n ",&x);//atribuindo endereçoa para o ponteiro

     ptrx =&x;//ptrx aponta para x
     pptrx=&ptrx;//pptrx aponta para ptrx
     *ptrx = *ptrx + 10;

printf("\n Valor de x = %d",x);
printf("\n Endereco apontado por ptrx:%x \n",ptrx);
printf("\n Valor da variavel x que esta sendo apontada pr ptrx: %d\n",*ptrx);
printf("\n Endereco de memoria da variavel ptrx %x \n",&ptrx);

**pptrx = **pptrx + 10;

printf("\n\n Valor de x = %d",x);
printf("\n Endereco apontado por **pptrx: %x",pptrx);
printf("\n Valor da variavel para a qual pptrx faz referencia: %d",**pptrx);
printf("\n Endereco de memoria da variavel **pptrx %x \n\n",&pptrx);

return 0;
}