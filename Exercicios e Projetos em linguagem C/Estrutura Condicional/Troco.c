/*Fazer um programa para calcular o troco no processo de pagamento de um produto de uma mercearia.
O programa deve ler o preço unitário do produto, a quantidade de unidades compradas deste produto,
e o valor em dinheiro dado pelo cliente. Seu programa deve mostrar o valor do troco a ser devolvido
ao cliente. Se o dinheiro dado pelo cliente não for suficiente, mostrar uma mensagem informando o
valor restante conforme exemplo. 
*/

#include<stdio.h>

int main(){
    
    float preco,total,recebido,falta,troco;
    int quant;


    printf("Digite o preco unitario do produto: ");
    scanf("%f",&preco);
     
    printf("Digite a quantidade comprada: ");
    scanf("%d",&quant);

    total = quant * preco;

    printf("Total da compra: %.2f\n",total);

    printf("Digite o valor recebido: ");
    scanf("%f",&recebido);

    if(recebido == total){
        printf("Valor exato! Obrigado pela compra!!");

    }else if(recebido > total){

        troco = (recebido - total);
        printf("Valor recebido: %.2f, troco :%.2f",recebido,troco);

    }else{
            falta = (total - recebido);
            printf("Valor insuficiente, faltam %.2f",falta);
    }

    
}