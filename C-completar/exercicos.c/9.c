#include <stdio.h>

int main() {
    float n1, n2;
    scanf("%f %f", &n1, &n2);

    float media = (n1 + n2) / 2;

    if (media >= 7) printf("Aprovado\n");
    else printf("Reprovado\n");

    return 0;
}
