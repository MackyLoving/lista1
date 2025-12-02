#include <stdio.h>

int main() {
    int numero; 
    int resultado;
    
    printf("Informe um numero inteiro para calcular a tabuada: ");
    scanf("%d", &numero);
    
    printf("\n Tabuada de %d (1 a 20)\n", numero);

    for (int i = 1; i <= 20; i++) {

        resultado = numero * i;
        printf("%2d x %2d = %4d\n", numero, i, resultado);
    }
    
    return 0;
}
