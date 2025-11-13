#include <stdio.h>

// Desafio Super Trunfo - Países
// Objetivo: No nível novato v
// Tema 1 - Cadastro das cartas você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.
// Objetivo: No nível aventureiro
// Tema 2 - Agora o programa calcula a densidade populacional, calcula o PIB PER CAPITA E EXIBE O RESULTADO

int main() {
    printf("Desafio Super Trunfo!\n");

  // Área para definição das variáveis para armazenar as propriedades das cidades

  // Declaração das variáveis para a Carta 1

    char estado1;
    char codigo1[4];
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidadepopulacional1; //iremos dividir população por area
    float pibpercapta1; //iremos dividir o PIB da cidade pela população

    // Declaração das variáveis para a Carta 2

    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidadepopulacional2; //iremos dividir população por area
    float pibpercapta2; //iremos dividir o PIB da cidade pela população

  // Área para entrada de dados

    //começou o jogo

    printf("****************super trunfo****************\n\n");

  // Entrada de dados da Carta 1
    printf("Cadastro da Carta 1\n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Digite o codigo da carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]s", nomeCidade1); // Lê até o ENTER (permite espaços no nome)

    printf("Digite a populacao: ");
    scanf("%d", &populacao1);

    printf("Digite a area em km²: ");
    scanf("%f", &area1);

    printf("Digite o PIB em bilhoes de reais: ");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);

    densidadepopulacional1 = populacao1 / area1; //iremos dividir população por area
    pibpercapta1 = (float) pib1 / populacao1;    //iremos dividir o PIB da cidade pela população

    // Entrada de dados da Carta 2
    printf("\nCadastro da Carta 2\n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Digite o codigo da carta (ex: B02): ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]s", nomeCidade2);

    printf("Digite a populacao: ");
    scanf("%d", &populacao2);

    printf("Digite a area em km²: ");
    scanf("%f", &area2);

    printf("Digite o PIB em bilhoes de reais: ");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);

    densidadepopulacional2 = populacao2 / area2; //iremos dividir população por area
    pibpercapta2 = (float) pib2 / populacao2;    //iremos dividir o PIB da cidade pela população

  // Área para exibição dos dados da cidade

  // Mostra ao usuario os dados da Carta 1

    printf("\n--- Carta 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);

    printf("densidade populacional: %f habitantes por quilômetro quadrado\n", densidadepopulacional1);
    printf("Pib per capta: %.2f\n\n", pibpercapta1);
    printf("\n\n");

    // Mostra ao usuario os dados da Carta 2

    printf("\n--- Carta 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);

    printf("densidade populacional: %f habitantes por quilômetro quadrado\n", densidadepopulacional2);
    printf("Pib per capta: %.2f\n\n", pibpercapta2);
    printf("\n\n");

return 0;
} 
