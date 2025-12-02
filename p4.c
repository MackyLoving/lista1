#include <stdio.h>

int main() {
    int tempo; 
    int hora;
    int min;
    int seg;
    
  
    int segundosAposHoras; 

    printf("Informe um valor (inteiro) representando o total de segundos:");
    scanf("%d", &tempo);

    hora = tempo / 3600; 

    segundosAposHoras = tempo % 3600;
    min = segundosAposHoras / 60; 
    
    seg = segundosAposHoras % 60; 

    printf("%d:%d:%d\n", hora, min, seg);

    return 0;
}
