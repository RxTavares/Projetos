/*Fazer um programa para ler um conjunto de N nomes de alunos, bem como as notas que eles tiraram
no 1º e 2º semestres. Cada uma dessas informações deve ser armazenada em um vetor. Depois, imprimir
os nomes dos alunos aprovados, considerando aprovados aqueles cuja média das notas seja maior ou
igual a 6.0 (seis). */

#include<stdio.h>

int main(){

    char nome[50][100];
    int N,i;
    float n1[50],n2[50],media;

    printf("Quantos alunos serao digitados: ");
    scanf("%d",&N);


    for (i = 0; i < N; i++)
    {
        printf("Digite o nome, primeira e segunda nota do %da aluno: \n", i+1);
        scanf("%s" ,nome[i]);
        scanf("%f",&n1);
        scanf("%f",&n2);}


        printf("Alunos aprovados: ");
        
        for ( i = 0; i < N; i++)
        {
            media = (n1[i] + n2[i])/2;
            if (media >= 6)
            {
                printf("%s \n",nome[i]);
            }
            
        }
  return 0;      
}