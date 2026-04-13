/*Um comerciante deseja fazer o levantamento do lucro das mercadorias que ele comercializa. Para isto,
mandou digitar um conjunto de N mercadorias, cada uma contendo nome, preço de compra e preço de
venda das mesmas. Fazer um programa que leia tais dados e determine e escreva quantas mercadorias
proporcionaram:
 lucro < 10%
 10% ≤ lucro ≤ 20%
 lucro > 20%
Determine e escreva também o valor total de compra e de venda de todas as mercadorias, assim como
o lucro total. 
*/
#include<stdio.h>
#include <locale.h>
#include <string.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

int N;
char nome[100][50];
float p_compra[100],p_venda[100];
int abaixo,entre,acima;
float lucro, perc_lucro;
float Tot_compra,Tot_venda,Tot_lucro;

printf("Serao digitados dados de quantos produtos ?");
scanf("%d",&N);

for (int i = 0; i < N; i++)
{
    printf("Produto %d\n: ",i+1);

    printf("Nome: ");
    scanf(" "); // limpa buffer
    fgets(nome[i], 50, stdin);
    nome[i][strcspn(nome[i], "\n")] = '\0'; // remove \n

    printf("Preco de compra: ");
    scanf("%f", &p_compra[i]);

    printf("Preco de venda: ");
    scanf("%f", &p_venda[i]);
}
/*Variaveis para adidionar valores abaixo, entre e acima dos lucros de 10% e 20%*/
abaixo = 0;
entre = 0;
acima = 0;

/*Para calcular o lucro, peguei o valor da venda, subtrai do valor da compra, 
    e para calcular o percentual de lucro, fiz uma regra de três, ond peguei o lucro *100 e dividi pelo preço de compra. E dentro da estrutura de repetição, fiz uma estrutura condicional, para caso o percentual de lucro for acima de 10%, entre 10% e 20% e acima de 20%, somar esse valor + 1 onde for necessário*/

    for (int i = 0; i < N; i++) {
        lucro = p_venda[i] - p_compra[i];

        if (p_compra[i] != 0)
            perc_lucro = (lucro * 100) / p_compra[i];
        else
            perc_lucro = 0;

        if (perc_lucro < 10)
            abaixo++;
        else if (perc_lucro <= 20)
            entre++;
        else
            acima++;
    }

Tot_compra = 0;
Tot_venda = 0;

    for ( int i = 0; i < N; i++)
    {
        Tot_compra += p_compra[i];
        Tot_venda += p_venda[i];
    }
    
    Tot_lucro = Tot_venda - Tot_compra;

    printf("\nLucro abaixo de 10%% : %d", abaixo);
    printf("\nLucro entre 10%% e 20%% : %d", entre);
    printf("\nLucro acima de 20%% : %d", acima);
    printf("\nValor total da compra: %.2f", Tot_compra);
    printf("\nValor total da venda: %.2f", Tot_venda);
    printf("\nLucro total: %.2f", Tot_lucro);

return 0;
}