#include <stdio.h>

int primo(int num) {
    if (num <= 1) {
        return 0;
    }
    for (int i = 2; i < num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);

    if (primo(num)) {
        printf("O numero %d eh primo.\n", num);
    } else {
        printf("O numero %d nao eh primo.\n", num);
    }

}