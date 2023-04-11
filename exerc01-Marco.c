// Exercícios Completos - Marco Gitti - 4º ADS-AMS

#include <stdio.h>

int main() {
    float deposito, taxa_juros, rendimento, valortotal;
    printf("Digite o valor do deposito: ");
    scanf("%f", &deposito);

    printf("Digite a taxa de juros em porcentagem: ");
    scanf("%f", &taxa_juros);

    rendimento = deposito * (taxa_juros / 100);
    valortotal = deposito + rendimento;

    printf("O valor do rendimento foi de: R$%.2f\n", rendimento);
    printf("O valor total depois do rendimento foi de: R$%.2f\n", valortotal);

    return 0;
}