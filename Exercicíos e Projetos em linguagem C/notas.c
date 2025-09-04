#include<stdio.h>
int main()
{
    float nota1,nota2;
    float nota_final;

    printf("Digite a primeira notas: ");
    scanf("%f",&nota1);

    printf("\n");

    printf("Digite a segunda nota: ");
    scanf("%f",&nota2);

    printf("\n ");

    nota_final = nota1 + nota2;

    if (nota_final > 60.00){

        printf("Aprovado com: %.2f",nota_final);
    }
        else{
            printf("Reprovado com: %.2f",nota_final);
        }    

    return 0;
}
