#include<stdio.h>
int main()
{
    //variaveis
    double valor_a_pagar,plano_basico;
        int exc,min; 

    //Comando de entrada 
    printf("Digite os minutos que foram usados: ");
    scanf("%d",&min);
    //Variavel const
        plano_basico = 50.00;
    //Comandos if 
            if (min <= 100){
                printf("Valor a ser pago R$ %.2f reais" ,plano_basico);
    //Comando else
            } else { 
                exc = min - 100;
                    valor_a_pagar = plano_basico + (2*exc);
                        printf("Minutos excedentes: %d \n",exc);
                            printf("Valor a ser pago R$ %.2f reais\n"  ,valor_a_pagar);            
    }
return 0;
}