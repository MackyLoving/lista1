#define texto "Esse código tem que ter 3 entradas \n"
#include <stdio.h>

int main() {
    printf(texto);
    int a, b, c;
    int x, y, z;
    
    scanf("%d %d %d", &a, &b, &c);

    x = a;
    y = b;
    z = c;

    // ordenando:
    if (a > b) { int t = a; a = b; b = t; }
    if (b > c) { int t = b; b = c; c = t; }
    if (a > b) { int t = a; a = b; b = t; }

    printf("Imprimindo em ordem crescente: %d%d%d\n\n", a, b, c);
    printf("Imprimindo na ordem original: %d%d%d\n", x, y, z);

    return 0;
}
