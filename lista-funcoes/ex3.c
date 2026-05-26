#include <stdio.h>

int potenciar(int a, int b){
    int r = 1;
    for (int i=0; i<b; i++) {
        r = r * a;
    }
    return r;
}

int main () {
    int a, b;
    printf("Funcao potenciar\n\n");
    printf("Escolha numero a ser potenciado: ");
    scanf("%d", &a);
    printf("Escolha numero da potencia: ");
    scanf("%d", &b);
    printf("A potencia e: %d", potenciar(a, b));
}