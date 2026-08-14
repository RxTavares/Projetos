#include<stdio.h>

int main (){

int mat[3][3];

//Elementos da matriz
for  ( int i = 0; i < 3; i++)
{
    for( int j = 0; j < 3;j++ )
    {
        mat [i][j] = i+j;
    }
}

//Imprimindo a matriz

for(int i = 0; i < 3; i++)
{
    for( int j=0;j<3;j++)
    {
        printf("%d",mat [i] [j] );
    }
    printf("\n");
}

}
