#include <stdio.h>

int main() {

    float salario;
    float percentualUtilizado; 
    float valorReajuste;       
    float novoSalario;         

    printf("Informe o salario atual (ex: 1400.00): R$ ");
    scanf("%f", &salario);

    if (salario < 1500.0) {
        percentualUtilizado = 20.0;
    } 
    else if (salario >= 1500.0 && salario < 5000.0) {
        percentualUtilizado = 15.0;
    } 
    else { 
        percentualUtilizado = 10.0;
    }

    valorReajuste = salario * (percentualUtilizado / 100.0); 
    novoSalario = salario + valorReajuste; 
    printf("Novo Salario: R$ %.2f\n", novoSalario);
    printf("Valor do Reajuste: R$ %.2f\n", valorReajuste);
    printf("Percentual Utilizado: %.0f%%\n", percentualUtilizado);

    return 0;
}
