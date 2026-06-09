#include <stdio.h>

int inverter(int n, int inv);

int main() {
    int n;
    printf("Inverter algarismos do numero\n\n");
    printf("Insira um numero: ");
    scanf("%d", &n);
    printf("Numero invertido: %d", inverter(n, 0));
}

int inverter(int n, int inv) {
    if (n == 0) {
        return inv;
    }
    return inverter(n/10, (inv * 10)+(n % 10));
}