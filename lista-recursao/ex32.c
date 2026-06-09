#include <stdio.h>
#include <string.h>

char* binario(int n, char* r);

int main() {
    int n;
    char r[10] = "";
    printf("Numero para binario\n\n");
    printf("Insira qual numero converter: ");
    scanf("%d", &n);
    printf("O numero %d em binario eh: %s\n", n, binario(n, r));
}

char* binario(int n, char* r) {
    if (n == 0) {
        return r;
    }

    binario(n / 2, r); 

    if (n % 2 == 0) {
        strcat(r, "0");
    } else {
        strcat(r, "1");
    }

    return r;
}