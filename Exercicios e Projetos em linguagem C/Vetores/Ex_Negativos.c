#include<stdio.h>
int main(){

int v[10];
int N,i;

printf("Quantos numeros serao digitados: ");
scanf("%d",&N);

for ( i = 0; i < N; i++)
{
    printf("Digite um numero: ");
    scanf("%d",&v[i]);
}
printf("Numeros Negativos: \n"); 

    for ( i = 0; i < N; i++)
{
    if ( v[i] < 0){
    printf("%d,",v[i]);
}
}
}