#include <stdio.h>

int main() {
    float horas, minutos;
    scanf("%f", &horas);
    minutos = horas * 60;
    printf("Minutos: %.2f\n", minutos);
    return 0;
}
