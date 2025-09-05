#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c;
    float delta,x1,x2;

    printf("Corficiente a: ");
    scanf("%f",&a);

    printf("Coeficiente b: ");
    scanf("%f",&b);

    printf("Coeficiente c:");
    scanf("%f",&c);

    delta = pow(b,2) - (4*a*c);
    
    if (a == 0 || delta < 0){
        printf("A equação nao possui raizes reais \n ");
    }
    else{
        x1 = (-b + sqrt(delta)) /  (2*a);
        x2 = (-b - sqrt(delta)) /  (2*a);

        printf(" Raiz 1 = %.2f",x1);
        printf(" Raiz 2 = %.2f",x2);
    }

return 0;
}