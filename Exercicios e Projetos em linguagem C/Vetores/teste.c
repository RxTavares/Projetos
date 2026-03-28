#include <stdio.h>
#include <locale.h>
#include <string.h>

void limparBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    int N;
    char nome[100][50];
    float p_compra[100], p_venda[100];
    int abaixo, entre, acima;
    float lucro, perc_lucro;
    float Tot_compra, Tot_venda, Tot_lucro;

    printf("Serao digitados dados de quantos produtos? ");
    scanf("%d", &N);
    limparBuffer();

    for (int i = 0; i < N; i++) {
        printf("\nProduto %d:\n", i + 1);

        printf("Nome: ");
        fgets(nome[i], 50, stdin);
        nome[i][strcspn(nome[i], "\n")] = '\0';

        printf("Preco de compra: ");
        scanf("%f", &p_compra[i]);

        printf("Preco de venda: ");
        scanf("%f", &p_venda[i]);

        limparBuffer(); // garante que o próximo fgets funcione
    }

    abaixo = entre = acima = 0;

    for (int i = 0; i < N; i++) {
        lucro = p_venda[i] - p_compra[i];

        if (p_compra[i] != 0)
            perc_lucro = (lucro * 100) / p_compra[i];
        else
            perc_lucro = 0;

        if (perc_lucro < 10)
            abaixo++;
        else if (perc_lucro <= 20)
            entre++;
        else
            acima++;
    }

    Tot_compra = Tot_venda = 0;

    for (int i = 0; i < N; i++) {
        Tot_compra += p_compra[i];
        Tot_venda += p_venda[i];
    }

    Tot_lucro = Tot_venda - Tot_compra;

    printf("\n\nRELATORIO:");
    printf("\nLucro abaixo de 10%%: %d", abaixo);
    printf("\nLucro entre 10%% e 20%%: %d", entre);
    printf("\nLucro acima de 20%%: %d", acima);
    printf("\nValor total de compra: %.2f", Tot_compra);
    printf("\nValor total de venda: %.2f", Tot_venda);
    printf("\nLucro total: %.2f\n", Tot_lucro);

    return 0;
}