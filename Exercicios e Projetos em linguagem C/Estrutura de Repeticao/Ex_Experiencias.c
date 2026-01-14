/* Faça um programa que leia um
valor inteiro N que indica os vários casos de teste que vem a seguir. Cada caso de teste contém um
inteiro que representa a quantidade de cobaias utilizadas e uma letra ('C', 'R' ou 'S'), indicando o tipo
de cobaia (R:Rato S:Sapo C:Coelho). Apresente o total de cobaias utilizadas, o total de cada tipo de
cobaia utilizada e o percentual de cada uma em relação ao total de cobaias utilizadas, sendo que o
percentual deve ser apresentado com dois dígitos após o ponto.*/
#include<stdio.h>

int main(){

int N,x; // x = quantidade //
char y; // y = tipo de cobaia//
int totc = 0,totr = 0,tots= 0,total_cob = 0;
float perc_c,perc_r,perc_s;

printf("Digite o numero de casos a serem testados: ");
scanf("%d",&N);

for ( int i = 0; i < N; i++)
{
   printf("Quantidade de cobaia: ");
   scanf("%d",&x);

   printf("Tipo de cobaia: ");
   scanf(" %c",&y);

      total_cob += x;

      if (y == 'c'){
         totc += x;
      }else if (y == 'r'){
         totr += x;
      }else if (y == 's'){
         tots += x;
      }
}
   perc_c = ((float)totc / total_cob) * 100;
   perc_r = ((float)totr / total_cob) * 100;
   perc_s = ((float)tots / total_cob) * 100;

      printf("Relatorio final: \n");

   printf("Total de cobaias: %d\n", total_cob);
   printf("Total de coelhos: %d\n",totc);
   printf("Total de ratos: %d\n",totr);
   printf("Total de sapos: %d\n",tots);
   printf("Percentual de coelhos: %.2f\n",perc_c);
   printf("Percentual de ratos: %.2f\n",perc_r);
   printf("Percentual de sapos: %.2f\n",perc_s);

return 0;
}

    
    

















    