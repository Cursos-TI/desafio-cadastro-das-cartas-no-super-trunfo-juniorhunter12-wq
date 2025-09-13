#include <stdio.h>

//Teste Edio

int main(){

    // CARTA 1

    int populacao;
    int numero_de_pontos_turisticos;    
    float area;    
    float pib;    
    char estado[20];    
    char codigo [50];    
    char nome_da_cidade [50];   
    float densidade_populacional;
    float pib_per_capita;

    // CARTA 2

    int populacao2;
    int numero_de_pontos_turisticos2;
    float area2;
    float pib2;
    char estado2[20];
    char codigo2 [50];
    char nome_da_cidade2 [50];
    float densidade_populacional2;
    float pib_per_capita2;

    // CARTA 1

    printf("Digite o estado: \n");
    scanf("%s", estado);    

    printf("Digite o nome da cidade; \n");
    scanf("%s", nome_da_cidade);    

    printf("Digite o código: \n");
    scanf("%s", codigo);

    printf("Digite a população: \n");
    scanf("%d" ,&populacao);
    
    printf("Digite área (em km²): \n");
    scanf("%f" ,&area);

    printf("Digite o pib: \n");
    scanf("%f" ,&pib);
    
    printf("Digite os numeros de pontos turísticos: \n");
    scanf("%d" ,&numero_de_pontos_turisticos);

    printf ("densidade_populacional = populacao / area: \n");
    scanf ("pib_per_capita = (pib * 1000000000) / populacao: \n";   

     // CARTA 2

    printf("Digite o estado: \n");
    scanf("%s", estado2);
   
    printf("Digite o nome da cidade; \n");
    scanf("%s", nome_da_cidade2);

    printf("Digite o código: \n");
    scanf("%s", codigo2);

    printf("Digite a população: \n");
    scanf("%d" ,&populacao2);

    printf("Digite área (em km²): \n");
    scanf("%f" ,&area2);

    printf("Digite o pib: \n");
    scanf("%f" ,&pib2);

    printf("Digite os numeros de pontos turísticos: \n");
    scanf("%d" ,&numero_de_pontos_turisticos2);

    printf ("densidade_populacional2 = populacao2 / area2: \n");
    scanf ("pib_per_capita2 = (pib2 * 1000000000) / populacao2: \n"; 


    // Exibindo as informações CARTA 1

    printf("Estado: %s \n", estado);    
    printf("Código: %s \n", codigo);    
    printf("Nome da cidade: %s \n", nome_da_cidade);    
    printf("População: %d \n", populacao);    
    printf("Área (em km²): %f \n", area);    
    printf("PIB: %f \n", pib);  
    printf("Número de pontos turísticos: %d \n", numero_de_pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita2);
    
    printf("\n");

    // Exibindo as informações CARTA 2

    printf("Estado: %s \n", estado2);
    printf("Código: %s \n", codigo2);
    printf("Nome da cidade: %s \n", nome_da_cidade2);
    printf("População: %d \n", populacao2);
    printf("Área (em km²): %f \n", area2);
    printf("PIB: %f \n", pib2);
    printf("Número de pontos turísticos: %d \n" ,numero_de_pontos_turisticos2);

return 0;


}
