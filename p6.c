int main() {

    float coordx;
    float coordy;
    
    // lendo as coordendas:
    printf("Informe a coordenada X do ponto: ");
    scanf("%f", &coordx);
    
    printf("Informe a coordenada Y do ponto: ");
    scanf("%f", &coordy);
    
    // Verificando a origem:
    if (coordx == 0.0 && coordy == 0.0) {
        printf("Localizacao: Origem\n");
    } 
    // Verificando os eixos:
    else if (coordx == 0.0) {
        printf("Localizacao: Eixo Y\n");
    } 
    else if (coordy == 0.0) {
        printf("Localizacao: Eixo X\n");
    }
    //  Verificação de quadrantes:
    else if (coordx > 0.0 && coordy > 0.0){
        printf("Localizacao: Quadrante Q1\n");
    } 
    
    else if (coordx < 0.0 && coordy > 0.0) {
        printf("Localizacao: Quadrante Q2\n");
    } 
    else if (coordx < 0.0 && coordy < 0.0) {
        printf("Localizacao: Quadrante Q3\n"); 
    } 
    else { 
        printf("Localizacao: Quadrante Q4\n"); 
    }
    
    return 0;
}
