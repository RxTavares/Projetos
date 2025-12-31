#include<stdio.h>

int main(){

int idade1,idade2;
char nome1[20],nome2[20];
float media;


printf("Dados da primeira pessoa: \n");

printf("Nome: ");
scanf("%s",&nome1);

printf("Idade: ");
scanf("%d",&idade1);

printf("Dados da segunda pessoa: \n");

printf("Nome: ");
scanf("%s",&nome2);

printf("Idade: ");
scanf("%d",&idade2);

media = (idade1+idade2)/2;

printf("A idade media de %s e %s e de %f",idade1,idade2,media);






return 0;
}