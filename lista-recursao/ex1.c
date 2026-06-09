#include <stdio.h>

int somatoria(int n);

int main() {
    int n;
    printf("Somatoria 1 a N\n\n");
    printf("Insira seu numero: ");
    scanf("%d", &n);
    printf("A somatoria e: %d", somatoria(n));
}

int somatoria(int n) {
    for (int i=n; i>=1; i--) {
        return i + somatoria(n-1);
    }
    return 1;
}