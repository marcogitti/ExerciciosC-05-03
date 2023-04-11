#include <stdio.h>

int main() {
    double lado, area_quadrado;
    printf("Digite o valor do lado do quadrado: ");
    scanf("%lf", &lado);
    area_quadrado = lado * lado;
    printf("A área do quadrado foi de %.2lf.", area_quadrado);
    
    return 0;
}