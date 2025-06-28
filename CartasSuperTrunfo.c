#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

char estado [30];
char carta [20];
char cidade [20];
int populacao;
float area;
float pib;
int pontos;

  // Área para entrada de dados

printf("Digite o nome do estado: \n");
scanf("%s", estado);

printf("Digite o código da carta: \n");
scanf("%s", carta);

printf("Digite o nome da cidade: \n");
scanf("%s", cidade);

printf("Digite o número de pessoas habitantes: \n");
scanf("%d", &populacao);

printf("Digite a área por km: \n");
scanf("%f", &area);

printf("Digite o PIB: \n");
scanf("%f", &pib);

printf("Digite o número de pontos turísticos: \n");
scanf("%d", &pontos);

  // Área para exibição dos dados da cidade

  printf("Nome do estado: %s\n", estado);
  printf("Código da carta: %s\n", carta);
  printf("Nome da cidade: %s\n", cidade);
  printf("Número de habitantes: %d\n", populacao);
  printf("Área por km: %f\n", area);
  printf("PIB: %f\n", pib);
  printf("Número de pontos turísticos: %d\n", pontos);

return 0;
} 
