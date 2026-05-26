#include <stdio.h>

int ehTriangulo(int a1, int a2, int a3) {

    if (a1+a2<a3 || a1+a3<a2 || a2+a3<a1) {
        return 0; // nao é triangulo
    } else if (a1 == a2 && a1 == a3){
        return 1; // equillatero
    } else if (a1 != a2 && a1 != a3 && a2 != a3) {
        return 3; // escaleno
    } else {
        return 2; // isosceles
    }
}

void resposta(int a1, int a2, int a3) {
    if (ehTriangulo(a1, a2, a3) == 0) {
        printf("Nao e triangulo");
    } else if (ehTriangulo(a1, a2, a3) == 1) {
        printf("Triangulo equillatero");
    } else if (ehTriangulo(a1, a2, a3) == 2) {
        printf("Triangulo isosceles");
    } else if (ehTriangulo(a1, a2, a3) == 3) {
        printf("Triangulo escaleno");
    } else {
        printf("Algum erro ocorreu");
    }
}

int main() {
    int a1, a2, a3;
    printf("Formato de triangulo\n\n");
    printf("Insira primeiro angulo: ");
    scanf("%d", &a1);
    printf("Insira segundo angulo: ");
    scanf("%d", &a2);
    printf("Insira terceiro angulo: ");
    scanf("%d", &a3);
    resposta(a1, a2, a3);

}
