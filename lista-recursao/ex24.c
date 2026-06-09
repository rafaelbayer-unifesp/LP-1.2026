#include <stdio.h>

int tribonacci(int n);

int main() {
    int n;
    printf("Tribonacci\n\n");
    printf("Insira seu numero: ");
    scanf("%d", &n);
    printf("O numero na posicao %d eh: %d", n, tribonacci(n));
}

int tribonacci(int n) {
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 0;
    }
    if (n == 2) {
        return 1;
    }
    return tribonacci(n-1) + tribonacci(n-2) + tribonacci(n-3);
}