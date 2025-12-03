#include <stdio.h>

int main() {
    float p1, p2;
    scanf("%f %f", &p1, &p2);

    if (p1 > p2) printf("Pessoa 1 mais pesada\n");
    else if (p2 > p1) printf("Pessoa 2 mais pesada\n");
    else printf("Pesos iguais\n");

    return 0;
}
