
/*Leia a hora inicial e a hora final de um jogo. A seguir calcule a duração do jogo, sabendo que o mesmo
pode começar em um dia e terminar em outro, tendo uma duração mínima de 1 hora e máxima de 24
horas. 
*/

#include<stdio.h>

int main(){

    int Hora_inicial, Hora_final, duracao;

    printf("Digite a hora inicial do jogo (Em fortato de 24hrs): ");
    scanf(" \n%d", &Hora_inicial );

    printf("Digite a hora final do jogo: ");
    scanf(" \n%d", &Hora_final);

    printf(" Hora inicial: %dhrs, e a hora final as %dhrs \n\n",Hora_inicial,Hora_final);

    if (Hora_inicial < Hora_final){
        duracao = Hora_final - Hora_inicial;
    } else {
        duracao = (24 - Hora_inicial) + Hora_final;
    }

    if((Hora_inicial > 6) && (Hora_inicial <= 12)){
        printf("Jogo pela manha");
    } else if((Hora_inicial > 12) && (Hora_inicial <= 18)){
            printf("Jogo pela tarde!!");
    }else{

        printf("Jogo pela madrugada"); 
    }
    printf("\n \n O jogo durou %d hora(s)\n", duracao);
    return 0;
}