#include <stdio.h>

int dividir(int a, int b){
    int resp = 0;
    for (int i=a; i>=b; i=i-b) {
        resp += 1;
    }

    return resp;
}

int main () {
    int a, b;
    printf("Funcao dividir\n\n");
    printf("Escolha primeiro numero (dividendo): ");
    scanf("%d", &a);
    printf("Escolha segundo numero (divisor): ");
    scanf("%d", &b);
    printf("A divisao e: %d", dividir(a, b));
}


/* 
    if (resto > 0) {
        aux = resto;
        for (int j=0; j<9; j++) {  // somando 9 vezes é como colocar 0 para
            aux += resto; // continuar depois da virgula, ou multiplicar por 10
        }
        for (int i=aux; i>=b; i=i-b) {
        resp = 
        }
    }
*/