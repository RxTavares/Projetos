#include<stdio.h> 

int main(){

    float C,F;
    char resp;


    do
    {
        printf("Digite a temperatura em celsius: ");
        scanf("%f",&C);

        F = 9.0 * C / 5.0 + 32.0;
        
        printf("Equivalente em fahrenheit: %.2f\n",F);
        printf("Deseja repetir ? (s/n): ");
        scanf("%c",&resp);
    

    } while (resp != 'n');

    return 0;
}