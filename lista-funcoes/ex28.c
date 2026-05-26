#include <stdio.h>
#include <string.h>

void fibonacci(int n) {
    int a=0, b=1, resp=1;
    printf("Sequencia Fibonacci: ");
    for (int i=0; i<n; i++) {
        b = resp;
        printf("%d ", resp);
        resp = a + b;
        a = b;
    }
}

int main() {
    int n;
    printf("Fibonacci\n\n");
    printf("Insira quantas vezes quer somar no formato fibonacci: ");
    scanf("%d", &n);
    fibonacci(n);
}