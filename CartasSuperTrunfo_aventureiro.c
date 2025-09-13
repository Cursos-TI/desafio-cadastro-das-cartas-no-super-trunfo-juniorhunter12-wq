#include <stdio.h>
#include <locale.h> // Suporte à acentuação

// Teste Edio
int main() {
    setlocale(LC_ALL, ""); // Ativa acentuação no terminal

    // CARTA 1
    int populacao;
    int numero_de_pontos_turisticos;    
    float area;    
    float pib;    
    char estado[20];    
    char codigo[50];    
    char nome_da_cidade[50];   
    float densidade_populacional;
    float pib_per_capita;

    // CARTA 2
    int populacao2;
    int numero_de_pontos_turisticos2;
    float area2;
    float pib2;
    char estado2[20];
    char codigo2[50];
    char nome_da_cidade2[50];
    float densidade_populacional2;
    float pib_per_capita2;

    // Entrada - CARTA 1
    printf("Digite o estado:\n");
    scanf("%s", estado);    

    printf("Digite o nome da cidade:\n");
    scanf("%s", nome_da_cidade);    

    printf("Digite o código:\n");
    scanf("%s", codigo);

    printf("Digite a população:\n");
    scanf("%d", &populacao);
    
    printf("Digite a área (em km²):\n");
    scanf("%f", &area);

    printf("Digite o PIB (em reais):\n");
    scanf("%f", &pib);
    
    printf("Digite o número de pontos turísticos:\n");
    scanf("%d", &numero_de_pontos_turisticos);

    // Cálculos da Carta 1
    densidade_populacional = populacao / area;
    pib_per_capita = pib / populacao;

    // Entrada - CARTA 2
    printf("Digite o estado:\n");
    scanf("%s", estado2);
   
    printf("Digite o nome da cidade:\n");
    scanf("%s", nome_da_cidade2);

    printf("Digite o código:\n");
    scanf("%s", codigo2);

    printf("Digite a população:\n");
    scanf("%d", &populacao2);

    printf("Digite a área (em km²):\n");
    scanf("%f", &area2);

    printf("Digite o PIB (em reais):\n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos:\n");
    scanf("%d", &numero_de_pontos_turisticos2);

    // Cálculos da Carta 2
    densidade_populacional2 = populacao2 / area2;
    pib_per_capita2 = pib2 / populacao2;

    // Saída - CARTA 1
    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estado);    
    printf("Código: %s\n", codigo);    
    printf("Nome da Cidade: %s\n", nome_da_cidade);    
    printf("População: %d\n", populacao);    
    printf("Área: %.2f km²\n", area);    
    printf("PIB: %.2f reais\n", pib);  
    printf("Número de Pontos Turísticos: %d\n", numero_de_pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita);

    // Saída - CARTA 2
    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome_da_cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", numero_de_pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita2);

    return 0;
}
