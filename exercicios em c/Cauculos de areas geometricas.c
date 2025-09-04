#include <stdio.h>
#include<math.h>

int main()
{
    int a,b,c;
    int Area_quad,Area_trian,Area_trap;

    printf("Digite o valor de A: ");
    scanf("%d",&a);
    printf("\n");

    printf("Digite o valor de B: ");
    scanf("%d",&b);
    printf("\n");
    
    printf("Digite o valor de C: ");
    scanf("%d",&c);
    printf("\n");

    Area_quad = pow(a,2);
    Area_trian = (b*a)/2;
    Area_trap = ((c+b)*a)/2;

    printf("Area do quadrado = %d",Area_quad);
    printf(" \n ");
    printf("Area do triangulo = %d",Area_trian);
    printf(" \n ");
    printf("Area do trapezio = %d",Area_trap);

    return 0;
}