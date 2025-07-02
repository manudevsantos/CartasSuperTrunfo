#include <stdio.h>

// Desafio Super Trunfo - Países - Nível Novato, Aventureiro
// Objetivo: Cadastrar duas cartas, calcular e exibir Densidade Populacional e PIB per Capita.

int main() {
    // --- Variáveis para a CARTA 1 ---
    char estado1[30];
    char carta1[20];
    char cidade1[20];
    float populacao1; 
    float area1;
    float pib_total1; 
    int pontos1;
    float densidade1;
    float pib1;

    // --- Variáveis para a CARTA 2 ---
    char estado2[30];
    char carta2[20];
    char cidade2[20];
    float populacao2;
    float area2;
    float pib_total2;
    int pontos2;
    float densidade2;
    float pib_per_capita2; // Novo nome para o PIB per Capita

    printf("*** Programa de calculo de média - Super Trunfo Países ***\n\n");

    // --- ENTRADA DE DADOS E CÁLCULOS PARA A CARTA 1 ---
    printf("--- Cadastro da Carta 1 ---\n");
    printf("Digite o nome do estado: "); // Removi o \n para o cursor ficar na mesma linha
    scanf("%s", estado1);

    printf("Digite o código da carta (ex: A01): ");
    scanf("%s", carta1);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade1);

    printf("Digite o número de pessoas habitantes (em milhões, ex: 12.325): "); // Sugestão para facilitar a entrada de grandes números
    scanf("%f", &populacao1);

    printf("Digite a área por km²: ");
    scanf("%f", &area1);

    printf("Digite o PIB (em bilhões/trilhões, ex: 699.28): ");
    scanf("%f", &pib_total1); // Lendo no pib_total1

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos1);

    // CÁLCULOS PARA A CARTA 1 (APÓS A ENTRADA DE DADOS)
    densidade1 = populacao1 / area1;
    pib_per_capita1 = pib_total1 / populacao1; // Usando pib_total1

    // --- ENTRADA DE DADOS E CÁLCULOS PARA A CARTA 2 ---
    printf("\n--- Cadastro da Carta 2 ---\n"); // Separador para a segunda carta
    printf("Digite o nome do estado: ");
    scanf("%s", estado2);

    printf("Digite o código da carta (ex: B02): ");
    scanf("%s", carta2);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade2);

    printf("Digite o número de pessoas habitantes (em milhões, ex: 6.748): ");
    scanf("%f", &populacao2);

    printf("Digite a área por km²: ");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhões/trilhões, ex: 300.50): ");
    scanf("%f", &pib_total2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos2);

    // CÁLCULOS PARA A CARTA 2 (APÓS A ENTRADA DE DADOS)
    densidade2 = populacao2 / area2;
    pib_per_capita2 = pib_total2 / populacao2;

    // --- EXIBIÇÃO DOS DADOS DA CARTA 1 ---
    printf("\n--- Dados da Carta 1 ---\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", carta1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %.0f\n", populacao1); // %.0f para exibir como inteiro, se a entrada for ex: 12.0
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib_total1);
    printf("Número de Pontos Turísticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita1);

    // --- EXIBIÇÃO DOS DADOS DA CARTA 2 ---
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