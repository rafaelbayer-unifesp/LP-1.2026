#include <stdio.h>

int fatorial (int n) {
    int r;
    if (n < 1) {
        return 1;
    }
    for (int i=n; i>=1; i--) {
        r = n * fatorial(n-1);
    }
    return r;
    
}

int main () {
    int n;
    printf("Fatorial\n\n");
    printf("Escolha numero: ");
    scanf("%d", &n);
    printf("O fatorial de %d e: %d", n, fatorial(n));
}