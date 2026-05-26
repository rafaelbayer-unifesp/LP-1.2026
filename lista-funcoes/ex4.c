#include <stdio.h>
#include <string.h>

char* invertido(char numero[]);

char* invertido(char numero[]) {
    static char invert[10];
    int cont = 0;
    for (int i = strlen(numero) - 1; i >= 0; i--) {
        invert[cont] = numero[i];
        cont++;
    }
    invert[cont] = '\0';
    return invert;
}


int main () {
    char numero[10];
    printf("\nNumero a ser invertido: ");
    fgets(numero, sizeof(numero), stdin);
    numero[strlen(numero) - 1] ='\0';
    
    printf("\nNumero invertido: ");
    printf("%s", invertido(numero));
}