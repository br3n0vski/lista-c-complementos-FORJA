#include <stdio.h>

int main() {
    float dolar, cotacao;
    scanf("%f %f", &dolar, &cotacao);

    printf("Reais: %.2f\n", dolar * cotacao);
    return 0;
}
