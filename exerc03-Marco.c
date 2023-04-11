#include <stdio.h>
#include <math.h>

int main() {
    double base, exp, resultado;
    printf("Digite a base: ");
    scanf("%lf", &base);
    printf("Digite o expoente: ");
    scanf("%lf", &exp);
    resultado = pow(base, exp);
    printf("%.2lf elevado a %.2lf = %.2lf", base, exp, resultado);
    
    return 0;
}