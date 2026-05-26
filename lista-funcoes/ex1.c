#include <stdio.h>

int multiplicar(int a, int b){
    int r = 0;
    for (int i=0; i<b; i++) {
        r += a;
    }
    return r;
}

int main () {
    int a, b;
    printf("Funcao multiplicar\n\n");
    printf("Escolha primeiro numero: ");
    scanf("%d", &a);
    printf("Escolha segundo numero: ");
    scanf("%d", &b);
    printf("A multiplicacao e: %d", multiplicar(a, b));
}