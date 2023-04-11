#include <stdio.h>

int main() {
    double base_maior, base_menor, altura, area;
    printf("Digite o valor da base maior do trapezio: ");
    scanf("%lf", &base_maior);
    printf("Digite o valor da base menor do trapezio: ");
    scanf("%lf", &base_menor);
    printf("Digite o valor da altura do trapezio: ");
    scanf("%lf", &altura);
    area = ((base_maior + base_menor) * altura) / 2.0;
    printf("A área do trapezio é %.2lf.", area);

    return 0;
}