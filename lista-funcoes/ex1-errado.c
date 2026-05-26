#include <stdio.h>

int operacao(int op, int a, int b) {
    int r;
    if (op == 1) {
        r = multiplicar(a, b);
        return r;
    } else if (op == 2) {
        r = dividir(a, b);
        return r;
    }
    return 0;
}

int multiplicar(int a, int b) {
    int r = b;
    for (int i=1; i<a; i++) {
        r += b;
    }
    return r;
}

int dividir (int a, int b) {
    int r = b;
    for (int i=0; i<a; i++) {
        r -= a;
    }
    return r;
}

int potenciar (int a, int b) {

}


int main() {
    int op, a, b, r;
    printf("Ex 1 ate Ex 3\n\n");

    printf("Insira primeiro valor: ");
    scanf("%d", &a);
    printf("Insira segundo valor: ");
    scanf("%d", &b);
    printf("Deseja multiplicacao, divisao ou potenciacao (1, 2, ou 3): ");
    scanf("%d", &op);
    r = operacao(op, a, b);
    printf("\nSua resposta e: ", r);
}