#include <stdio.h>
#include <math.h> 

int main() {
    float valorA;
    float valorB;
    float valorC;
    float delta;
    float raiz1;
    float raiz2;

    printf("Informe o valor de A: ");
    scanf("%f", &valorA);

    printf("Informe o valor de B: ");
    scanf("%f", &valorB);

    printf("Informe o valor de C: ");
    scanf("%f", &valorC);

    delta = (valorB * valorB) - (4 * valorA * valorC);

    if (valorA == 0.0 || delta < 0.0) {
        printf("Impossivel calcular\n");
    } 
    else {
        
        raiz1 = (-valorB + sqrt(delta)) / (2.0 * valorA);
        
        raiz2 = (-valorB - sqrt(delta)) / (2.0 * valorA);

        printf("Raiz 1 (X1): %.5f\n", raiz1);
        printf("Raiz 2 (X2): %.5f\n", raiz2);
    }

    return 0;
}
