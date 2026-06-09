#include <stdio.h>

int fatorial(int n);

int main() {
    int n;
    printf("Fatorial de N\n\n");
    printf("Insira seu numero: ");
    scanf("%d", &n);
    printf("A fatorial e: %d", fatorial(n));
}

int fatorial(int n) {
    for (int i=n; i>=1; i--) {
        return i * fatorial(n-1);
    }
    return 1;
}