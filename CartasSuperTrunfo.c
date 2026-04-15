#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
    char Estado ['a','b','c','d','e','f','g','h'], Código, Nome da Cidade;
    int População, Número de Pontos Turisticos;
    float Área, PIB;
  // Área para definição das variáveis para armazenar as propriedades das cidades

    printf("Digite a primeira letra de um Estado: \n");
    scanf ("%s", &Estado);

    printf("Digite o código da Carta: \n");
    scanf ("%s", &Código);

    printf("Digite o nome da Cidade: \n");
    scanf ("%s", &Cidade);

    printf("Digite o número de habitantes da Cidade: \n");
    scanf ("%d", &População);

    printf("Digite a Área da cidade: \n");
    scanf ("%f", &Área);

    printf("Digite o PIB da sua cidade: \n");
    scanf ("%f", &PIB);

    printf("Digite o número de pontos turisticos da sua cidade: \n");
    scanf ("%d", &Cidade);
  // Área para entrada de dados

    printf("Estado: %s\n", Estado);
    printf("Código: %s\n", Código);
    printf("Nome da Cidade: %s\n", Cidade);
    printf("População: %d\n", População);
    printf("Área: %f\n", Área);
    printf("PIB: %f\n", PIB);
    printf("Número de pontos turisticos: %s\n", Número de Pontos Turisticos);


  // Área para exibição dos dados da cidade

return 0;
} 
