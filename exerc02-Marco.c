#include <stdio.h>
#include <math.h>

int main() {
    float numero;
    int parte_inteira;
    float parte_fracionaria;
    float arredondamento;

    printf("Digite um numero real: ");
    scanf("%f", &numero);

    parte_inteira = (int)numero;
    parte_fracionaria = numero - parte_inteira;
    arredondamento = (numero);

    printf("Parte inteira: %d\n", parte_inteira);
    printf("Parte Fracionaria: %.2f\n", parte_fracionaria);
    printf("Arredondamento: %.2f\n", arredondamento);

    return 0;
}