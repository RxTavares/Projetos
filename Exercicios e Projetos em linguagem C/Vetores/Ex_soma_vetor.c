 /*Faça um programa que leia N números reais e armazene-os em um vetor. Em seguida:
 - Imprimir todos os elementos do vetor
 - Mostrar na tela a soma e a média dos elementos do vetor*/
 #include<stdio.h>

 int main(){

    float s = 0;
    float media;
    float v[20];
    int i,N;

    printf("Digite quantos numeros serao digitados: ");
    scanf("%d",&N);

    for ( i = 0; i < N; i++){
        printf("Digite um numero: ");
        scanf("%f",&v[i]);
    }
    printf("Valores: ");
    for ( i = 0; i < N; i++)
    { 
        printf("%.2f, ",v[i]);
        s += v[i];  
    }
        media = s/N;

         printf("\n Soma = %.2f\n",s);
         printf("\n Media = %.2f\n",media);

    return 0;
 }