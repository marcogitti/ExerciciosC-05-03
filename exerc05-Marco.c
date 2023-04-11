#include <stdio.h>

int main() {
    double salario_funcionario, salario_minimo, num_salarios_minimos;
    printf("Valor do salario do funcionario: ");
    scanf("%lf", &salario_funcionario);
    printf("Digite o valor do salario mínimo: ");
    scanf("%lf", &salario_minimo);
    num_salarios_minimos = salario_funcionario / salario_minimo;
    printf("O funcionario ganha %.2lf salarios minimos.", num_salarios_minimos);

    return 0;
}