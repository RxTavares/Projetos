#include<stdio.h>
#include<string.h>

int main()
{
    char usuario[15];
    int senha;

    printf("Digite o usuario: ");
    scanf("%s",&usuario);
    printf("Digite a Senha: ");
    scanf("%d",&senha);

    if((strcmp(usuario,"Rafael")==0)&&(senha==123456))
    printf("Usuario e senha confirmadas!");
    else
    printf("Usuario ou senha incorretas");


return 0;
}
