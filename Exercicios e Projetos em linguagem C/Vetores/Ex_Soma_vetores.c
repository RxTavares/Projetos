/*Faça um programa para ler dois vetores A e B, contendo N elementos cada. Em seguida, gere um
terceiro vetor C onde cada elemento de C é a soma dos elementos correspondentes de A e B. Imprima
o vetor C gerado. 
*/

#include <stdio.h>
int main(){
 
  int N,i;
  int A[100],B[100],C[100];

    printf("Quantos valores vai ter cada vetor ? ");
    scanf("%d",&N);

    if (N <= 0 || N > 100) {
        printf("Número inválido. Insira um valor entre 1 e 100.\n");
        return 1;
    }

    printf("Digite os valores de A: \n");

    for (i = 0; i < N; i++)
    {
        scanf("%d",&A[i]);
    }
    
    printf("Digite os valores de B: \n");

    for (i = 0; i < N; i++)
    {
        scanf("%d",&B[i]);
    }

    for ( i = 0; i < N; i++)
    {
        C[i] = A[i] + B[i];
    }
    
    printf("Vetor resultante: ");

    for ( i = 0; i < N; i++)
    {
        printf("%d ",C[i]);
    }
    printf("\n");
 return 0;   
}
