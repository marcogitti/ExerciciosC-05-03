#include <stdio.h>

int main() {
    double salario, imposto;
    printf("Digite o valor do salario do funcionario: ");
    scanf("%lf", &salario);
    imposto = salario * 0.05;
    printf("O valor do imposto de renda a ser pago é de R$%.2lf.", imposto);

    return 0;
}