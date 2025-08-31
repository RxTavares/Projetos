#include<stdio.h>

int main(){

    int Hora_inicial, Hora_final, duracao;

    printf("Digite a hora inicial do jogo: ");
    scanf("%d", &Hora_inicial);

    printf("Digite a hora final do jogo: ");
    scanf("%d", &Hora_final);

    if (Hora_inicial < Hora_final){
        duracao = Hora_final - Hora_inicial;
    } else {
        duracao = (24 - Hora_inicial) + Hora_final;
    }

    if((Hora_inicial > 6) && (Hora_inicial <= 12)){
        printf("Jogo pela manha");

    } else if((Hora_inicial > 12) && (Hora_inicial <= 18)){
            printf("Jogo pela tarde");
    }else{
        printf("Jogo pela madrugada"); 
    }

    printf("\nO jogo durou %d hora(s)\n", duracao);

    return 0;
}