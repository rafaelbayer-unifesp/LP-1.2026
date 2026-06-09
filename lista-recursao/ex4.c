#include <stdio.h>

int elevacao(int k, int n);

int main() {
    int k, n;
    printf("Elevando K a N\n\n");
    printf("Insira K: ");
    scanf("%d", &k);
    printf("Insira N: ");
    scanf("%d", &n);
    printf("Elevando %d a %d eh: %d", k, n, elevacao(k, n));
}

int elevacao(int k, int n) {
    if (n == 0) {
        return 1;
    }
    return  k * elevacao(k, n-1);
}
   