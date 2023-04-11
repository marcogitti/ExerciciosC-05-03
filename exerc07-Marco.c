#include <stdio.h>
#include <math.h>

int main() {
    double raio, area;
    printf("Digite o valor do raio do circulo: ");
    scanf("%lf", &raio);
    area = area * raio * raio;
    printf("A área do circulo é %.2lf.", area);

    return 0;
}