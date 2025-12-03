#include <stdio.h>

int main() {
    float valor;
    printf("Valor: ");
    scanf("%f", &valor);

    printf("Com acrescimo: %.2f\n", valor * 1.15);
    return 0;
}
