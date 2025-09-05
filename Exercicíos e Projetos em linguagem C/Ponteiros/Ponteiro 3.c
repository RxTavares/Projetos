#include<stdio.h>
#include<stdlib.h>

//prototipo da função media
float media (int n, float *vnotas);
int main (void){

    float vnotas[10];
    float media_notas;
    int i;
    //leitura das notas
    for(i=0; i<10; i++){
    printf("\n Digite os valores das notas: ");
    scanf("%f",&vnotas[i]);
    }
    //chamada da função
    media_notas = media(10,vnotas);
    printf("\n Media = %1.f\n",media_notas);
    system("pause");
    return 0;
}
/*funçao para calculo da media
Parametros:
Recebe a quantidade de elementos n
Recebe o endereço inicial do vetor notas em *vnotas
Retorno:
Retorna a media na variavel m
*/
float media( int n , float *vnotas)
{
    int i;
    float m = 0, soma = 0;
    //fazendo a somatoria das notas
    for (i=0; i<n; i++)
        soma = soma + vnotas[i];
    //dividindo pela quantidade de elementos n
    m = soma / n ;

    return m;
}
