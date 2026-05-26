#include <stdio.h>
#include <string.h>

int palindromo(char p[]) {
    for (int i=0; i < strlen(p)/2; i++) {
        if (p[i] != p[strlen(p)-1 - i]){
            return 0;
        }
    }
    return 1;
}

int main() {
    char p[30];
    printf("Verificador de palindromo\n\n");
    printf("Insira uma frase: ");
    scanf("%s", &p);
    if (palindromo(p)) {
        printf("Palindromo");
    } else {
        printf("Nao e palindromo");
    }
}