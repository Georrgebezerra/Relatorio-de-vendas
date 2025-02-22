#include <stdio.h>

#define TAMANHO 5 

int main() {
    int vendas[TAMANHO]; 
    int soma = 0;        

    printf("=== Sistema de Vendas Diarias ===\n");
        for (int i = 0; i < TAMANHO; i++) {
            printf("Digite a quantidade de vendas do dia %d: ", i + 1);
            scanf("%d", &vendas[i]);
            soma += vendas[i]; 
    }

    printf("\n=== Relatorio de Vendas ===\n");
        for (int i = 0; i < TAMANHO; i++) {
        printf("Dia %d: %d vendas\n", i + 1, vendas[i]);
    }

    printf("\nSoma total de vendas nos 5 dias: %d\n", soma);

    return 0;
}

By: gg_Dev
