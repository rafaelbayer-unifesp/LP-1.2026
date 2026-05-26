#include <stdio.h>

void divisores(int n) {
    for (int i=1; i<=n; i++) {
        if (n % i == 0) {
            printf("%d ", i);
        }
    }
}

int main() {
    int n;
    printf("\nDivisores de um numero\n\n");
    printf("Insira um inteiro positivo: ");
    scanf("%d", &n);
    printf("Divisores de %d: ", n);
    divisores(n);

}