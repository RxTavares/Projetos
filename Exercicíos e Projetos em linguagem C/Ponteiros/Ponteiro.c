#include<stdio.h>
#include<conio.h>

int main(void)
{
    //valor é a variavel que será apontada pelo ponteiro

    int valor = 27; //declaração de variavel ponteiro

    int *ptr; //atribuindo o endereço da variavel valor ao ponteiro

    ptr = &valor; //recebe o endereço de memoria valor

 printf("\n Utilizando ponteiro \n \n ");
 printf("\n Conteudo da variavel valor: %d\n",valor);
 printf("\n Endereco da variavel valor: %x \n",&valor);
 printf("\n Endereco da variavel ponteiro ptr: %x \n",ptr);
 printf("\n Conteudo da variavel ponteiro ptr: %d \n", *ptr);
    getch();

    return (0);

    //ptr exibe o endereço onde esta localizado o conteudo na memoria
    //*ptr exibe o valor do conteudo 
}

