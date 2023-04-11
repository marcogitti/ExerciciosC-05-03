#include <stdio.h>

int main() {
    double diagonal_maior, diagonal_menor, area;
    printf("Digite o valor da diagonal MAIOR do losango: ");
    scanf("%lf", &diagonal_maior);
    printf("Digite o valor da diagonal MENOR do losango: ");
    scanf("%lf", &diagonal_menor);
    area = (diagonal_maior * diagonal_menor) / 2.0;
    printf("A área do losango é %.2lf.", area);

    return 0;
}