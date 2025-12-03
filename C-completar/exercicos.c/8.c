#include <stdio.h>

int dobro(int x) {
    return x * 2;
}

int main() {
    int n;
    scanf("%d", &n);

    printf("Dobro: %d\n", dobro(n));
    return 0;
}
