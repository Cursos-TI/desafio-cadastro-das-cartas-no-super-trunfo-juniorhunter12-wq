#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");

    // Carta 1
    unsigned long int populacao;
    int numero_de_pontos_turisticos;    
    float area;    
    float pib;    
    char estado[20];    
    char codigo[50];    
    char nome_da_cidade[50];   
    float densidade_populacional;
    float pib_per_capita;
    float super_poder1;

    // Carta 2
    unsigned long int populacao2;
    int numero_de_pontos_turisticos2;
    float area2;
    float pib2;
    char estado2[20];
    char codigo2[50];
    char nome_da_cidade2[50];
    float densidade_populacional2;
    float pib_per_capita2;
    float super_poder2;

    // Entrada - Carta 1
    printf("Digite o estado:\n");
    scanf("%s", estado);    

    printf("Digite o nome da cidade:\n");
    scanf("%s", nome_da_cidade);    

    printf("Digite o código:\n");
    scanf("%s", codigo);

    printf("Digite a população:\n");
    scanf("%lu", &populacao);
    
    printf("Digite a área (em km²):\n");
    scanf("%f", &area);

    printf("Digite o PIB (em reais):\n");
    scanf("%f", &pib);
    
    printf("Digite o número de pontos turísticos:\n");
    scanf("%d", &numero_de_pontos_turisticos);

    // Cálculos da Carta 1
    densidade_populacional = populacao / area;
    pib_per_capita = pib / populacao;
    super_poder1 = populacao + area + pib + numero_de_pontos_turisticos + pib_per_capita + (1 / densidade_populacional);

    // Entrada - Carta 2
    printf("Digite o estado:\n");
    scanf("%s", estado2);
   
    printf("Digite o nome da cidade:\n");
    scanf("%s", nome_da_cidade2);

    printf("Digite o código:\n");
    scanf("%s", codigo2);

    printf("Digite a população:\n");
    scanf("%lu", &populacao2);

    printf("Digite a área (em km²):\n");
    scanf("%f", &area2);

    printf("Digite o PIB (em reais):\n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos:\n");
    scanf("%d", &numero_de_pontos_turisticos2);

    // Cálculos da Carta 2
    densidade_populacional2 = populacao2 / area2;
    pib_per_capita2 = pib2 / populacao2;
    super_poder2 = populacao2 + area2 + pib2 + numero_de_pontos_turisticos2 + pib_per_capita2 + (1 / densidade_populacional2);

    // Saída - Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estado);    
    printf("Código: %s\n", codigo);    
    printf("Nome da Cidade: %s\n", nome_da_cidade);    
    printf("População: %lu\n", populacao);    
    printf("Área: %.2f km²\n", area);    
    printf("PIB: %.2f reais\n", pib);  
    printf("Número de Pontos Turísticos: %d\n", numero_de_pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita);
    printf("Super Poder: %.2f\n", super_poder1);

    // Saída - Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome_da_cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", numero_de_pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita2);
    printf("Super Poder: %.2f\n", super_poder2);

    // Comparações
    printf("\nComparação de Cartas:\n");
    printf("População: Carta 1 venceu (%d)\n", populacao > populacao2);
    printf("Área: Carta 1 venceu (%d)\n", area > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib > pib2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", numero_de_pontos_turisticos > numero_de_pontos_turisticos2);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade_populacional < densidade_populacional2); // menor vence
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pib_per_capita > pib_per_capita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", super_poder1 > super_poder2);

    return 0;
}

