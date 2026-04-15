#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
    char Estado;
    char Codigo[10];
    char Cidade[50];
    int Populacao, NumerodePontosTuristicos;
    float Area, PIB;

  // Área para definição das variáveis para armazenar as propriedades das cidades

    printf("Carta 01\n\n");

    printf("Digite a primeira letra de um Estado: \n");
    scanf (" %c", &Estado);

    printf("Digite o código da Carta: \n");
    scanf (" %s", Codigo);

    printf("Digite o nome da Cidade: \n");
    scanf ("%s", Cidade);

    printf("Digite o número de habitantes da Cidade: \n");
    scanf (" %d", &Populacao);

    printf("Digite a Área da cidade: \n");
    scanf (" %f", &Area);

    printf("Digite o PIB da sua cidade: \n");
    scanf (" %f", &PIB);

    printf("Digite o número de pontos turisticos da sua cidade: \n");
    scanf (" %d", &NumerodePontosTuristicos);
  // Área para entrada de dados

    printf("Estado: %c\n", Estado);
    printf("Código: %s\n", Codigo);
    printf("Nome da Cidade: %s\n", Cidade);
    printf("População: %d\n", Populacao);
    printf("Área: %f\n", Area);
    printf("PIB: %f\n", PIB);
    printf("Número de pontos turisticos: %d\n", NumerodePontosTuristicos);

    printf("Carta 01 criada com sucesso!\n\n");

    // carta 01 finalizada

    printf("Carta 02\n\n");

    printf("Digite a primeira letra de um Estado: \n");
    scanf (" %c", &Estado);

    printf("Digite o código da Carta: \n");
    scanf (" %s", Codigo);

    printf("Digite o nome da Cidade: \n");
    scanf ("%s", Cidade);

    printf("Digite o número de habitantes da Cidade: \n");
    scanf (" %d", &Populacao);

    printf("Digite a Área da cidade: \n");
    scanf (" %f", &Area);

    printf("Digite o PIB da sua cidade: \n");
    scanf (" %f", &PIB);

    printf("Digite o número de pontos turisticos da sua cidade: \n");
    scanf (" %d", &NumerodePontosTuristicos);
  // Área para entrada de dados

    printf("Estado: %c\n", Estado);
    printf("Código: %s\n", Codigo);
    printf("Nome da Cidade: %s\n", Cidade);
    printf("População: %d\n", Populacao);
    printf("Área: %f\n", Area);
    printf("PIB: %f\n", PIB);
    printf("Número de pontos turisticos: %d\n", NumerodePontosTuristicos);
  // Área para exibição dos dados da cidade

    printf("Carta 02 criada com sucesso!");

  // Carta 02 finalizada
return 0;
} 
