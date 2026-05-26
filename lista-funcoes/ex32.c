#include <stdio.h>

float farenheit_para_celsius(float f) {
    return (f - 32) * 5 / 9;
}

int main() {
    printf("\nFarenheit para celsius\n\n");
    for (int i=50; i<=150; i+=1){
        printf("%d Farenheit = %f Celsius\n", i, farenheit_para_celsius(i));
    }
}