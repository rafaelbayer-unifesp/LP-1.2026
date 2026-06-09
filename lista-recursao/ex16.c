#include <stdio.h>

int fatorial(int n);

int main() {
    int n;
    printf("Fatorial duplo de N (somente impares)\n\n");
    printf("Insira seu numero: ");
    scanf("%d", &n);
    printf("A fatorial duplo eh: %d", fatorial(n));
}

int fatorial(int n) {
    if (n%2 == 0) {
        n--;
    }
    for (int i=n; i>=1; i--) {
        return i * fatorial(n-2);
    }
    return 1;
}