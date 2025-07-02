#include <stdio.h>

int main() {
    // Variáveis para a CARTA 1
    char estado1[30];
    char carta1[20];
    char cidade1[20];
    float populacao1;
    float area1;
    float pib_total1;
    int pontos1;
    float densidade1;
    float pib_per_capita1;

    // Variáveis para a CARTA 2
    char estado2[30];
    char carta2[20];
    char cidade2[20];
    float populacao2;
    float area2;
    float pib_total2;
    int pontos2;
    float densidade2;
    float pib_per_capita2;

    printf("*** Desafio Super Trunfo - Países - Nível Aventureiro ***\n\n");

    // ENTRADA DE DADOS PARA A CARTA 1
    printf("--- Cadastro da Carta 1 ---\n");
    printf("Digite o nome do estado: ");
    scanf("%s", estado1);

    printf("Digite o código da carta (ex: A01): ");
    scanf("%s", carta1);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade1);

    printf("Digite a população (ex: 12325000): ");
    scanf("%f", &populacao1);

    printf("Digite a área em km² (ex: 1521.11): ");
    scanf("%f", &area1);

    printf("Digite o PIB (ex: 699.28): ");
    scanf("%f", &pib_total1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos1);

    // CÁLCULOS PARA A CARTA 1
    densidade1 = populacao1 / area1;
    pib_per_capita1 = pib_total1 / populacao1;

    // ENTRADA DE DADOS PARA A CARTA 2
    printf("\n--- Cadastro da Carta 2 ---\n");
    printf("Digite o nome do estado: ");
    scanf("%s", estado2);

    printf("Digite o código da carta (ex: B02): ");
    scanf("%s", carta2);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade2);

    printf("Digite a população (ex: 6748000): ");
    scanf("%f", &populacao2);

    printf("Digite a área em km² (ex: 1200.25): ");
    scanf("%f", &area2);

    printf("Digite o PIB (ex: 300.50): ");
    scanf("%f", &pib_total2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos2);

    // CÁLCULOS PARA A CARTA 2
    densidade2 = populacao2 / area2;
    pib_per_capita2 = pib_total2 / populacao2;

    // EXIBIÇÃO DOS DADOS DA CARTA 1
    printf("\n--- Dados da Carta 1 ---\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", carta1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %.0f\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib_total1);
    printf("Número de Pontos Turísticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita1);

    // EXIBIÇÃO DOS DADOS DA CARTA 2
    printf("\n--- Dados da Carta 2 ---\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", carta2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %.0f\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib_total2);
    printf("Número de Pontos Turísticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita2);

    return 0;
}