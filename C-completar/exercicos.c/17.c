#include <stdio.h>

int main() {
    float nota;
    scanf("%f", &nota);

    if (nota >= 0 && nota <= 10)
        printf("Nota valida: %.2f\n", nota);
    else
        printf("Nota invalida!\n");

    return 0;
}
