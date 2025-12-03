#include <stdio.h>

int main() {
    char nome[50], cidade[50];

    printf("Nome: ");
    fgets(nome, 50, stdin);

    printf("Cidade: ");
    fgets(cidade, 50, stdin);

    printf("%s mora em %s", nome, cidade);
    return 0;
}
