#include <stdio.h>
#include <math.h>

int main() {
    int numero;
    double raizquadrada, elevado_ao_quadrado;
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);
    raizquadrada = sqrt(numero);
    elevado_ao_quadrado = pow(numero, 2);
    printf("Raiz quadrada de %d = %.2lf\n", numero, raizquadrada);
    printf("%d elevado ao quadrado = %.2lf", numero, elevado_ao_quadrado);

    return 0;
}