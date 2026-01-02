#include <stdio.h>

// Desafio Super Trunfo - Países
// Objetivo: No nível novato v
// Tema 1 - Cadastro das cartas você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.
// Objetivo: No nível aventureiro
// Tema 2 - Agora o programa calcula a densidade populacional, calcula o PIB PER CAPITA E EXIBE O RESULTADO
// Tema 3 - Fiz a implementação de super poderes e agora o programa compara as cartas e imprimi o resultado
// Tema 4 - Implementei menu interativo usando switch para escolher e comparar atributos entre duas cartas
int main() {
    printf("Desafio Super Trunfo!\n");
// Área para definição das variáveis para armazenar as propriedades das cidades

    // Declaração das variáveis para a Carta 1
    char estado1;
    char codigo1[4];
    char nomeCidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    float densidadepopulacional1; //iremos dividir população por area
    float pibpercapta1; //iremos dividir o PIB da cidade pela população
    int pontosTuristicos1;
    float superpoder1;

    // Declaração das variáveis para a Carta 2
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    float densidadepopulacional2;//iremos dividir população por area
    float pibpercapta2; //iremos dividir o PIB da cidade pela população
    int pontosTuristicos2;
    float superpoder2;

    printf("****************super trunfo****************\n\n");

    //Entrada de dados da Carta 1
    printf("Cadastro da Carta 1\n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Digite o codigo da carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade1); // Lê até o ENTER (permite espaços no nome)

    printf("Digite a populacao: ");
    scanf("%lu", &populacao1);

    printf("Digite a area em km²: ");
    scanf("%f", &area1);

    printf("Digite o PIB em bilhoes de reais: ");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);

    densidadepopulacional1 = populacao1 / area1;
    pibpercapta1 = (pib1 * 1000000000.0f) / populacao1;

    //Super poder 1 - Implementação de super poder, armazenado como float e somando todos os atributos
    superpoder1 = (float)populacao1 +
                  area1 +
                  pib1 +
                  pontosTuristicos1 +
                  pibpercapta1 +
                  (1.0f / densidadepopulacional1);


    //Entrada de dados da Carta 2
    printf("\nCadastro da Carta 2\n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Digite o codigo da carta (ex: B02): ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade2); // Lê até o ENTER (permite espaços no nome)

    printf("Digite a populacao: ");
    scanf("%lu", &populacao2);

    printf("Digite a area em km²: ");
    scanf("%f", &area2);

    printf("Digite o PIB em bilhoes de reais: ");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);

    densidadepopulacional2 = populacao2 / area2;
    pibpercapta2 = (pib2 * 1000000000.0f) / populacao2;

    //Super poder 2 - Implementação de super poder, armazenado como float e somando todos os atributos
    superpoder2 = (float)populacao2 +
                  area2 +
                  pib2 +
                  pontosTuristicos2 +
                  pibpercapta2 +
                  (1.0f / densidadepopulacional2);


    // Exibição da Carta 1
    printf("\n--- Carta 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional1);
    printf("PIB per Capita: %.2f reais\n", pibpercapta1);
    printf("Super Poder: %.2f\n", superpoder1);

    // Exibição da Carta 2
    printf("\n--- Carta 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibpercapta2);
    printf("Super Poder: %.2f\n", superpoder2);


    //Implementação de comparação entre as cartas e impressão das mesmas
    printf("\n====== RESULTADO DAS COMPARACOES ======\n");

    printf("Populacao: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Area: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turisticos: Carta 1 venceu (%d)\n", pontosTuristicos1 > pontosTuristicos2);
    printf("Densidade Populacional (menor vence): Carta 1 venceu (%d)\n", densidadepopulacional1 < densidadepopulacional2);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibpercapta1 > pibpercapta2);
    printf("Super Poder: Carta 1 venceu (%d)\n", superpoder1 > superpoder2);

    // ================== MENU INTERATIVO ==================

    int opcaoComparacao;

    printf("\n====== MENU INTERATIVO DE COMPARACAO ======\n");
    printf("1. Populacao\n");
    printf("2. Area\n");
    printf("3. PIB\n");
    printf("4. Pontos Turisticos\n");
    printf("5. Densidade Demografica\n");
    printf("6. PIB per Capita\n");
    printf("7. Super Poder\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcaoComparacao);

    printf("\n====== RESULTADO DA COMPARACAO ======\n");

    switch (opcaoComparacao) {

        case 1:
            printf("Atributo: Populacao\n");
            printf("%s: %lu\n", nomeCidade1, populacao1);
            printf("%s: %lu\n", nomeCidade2, populacao2);
            if (populacao1 > populacao2)
                printf("Vencedora: %s\n", nomeCidade1);
            else if (populacao2 > populacao1)
                printf("Vencedora: %s\n", nomeCidade2);
            else
                printf("Empate!\n");
            break;

        case 2:
            printf("Atributo: Area\n");
            printf("%s: %.2f\n", nomeCidade1, area1);
            printf("%s: %.2f\n", nomeCidade2, area2);
            if (area1 > area2)
                printf("Vencedora: %s\n", nomeCidade1);
            else if (area2 > area1)
                printf("Vencedora: %s\n", nomeCidade2);
            else
                printf("Empate!\n");
            break;

        case 3:
            printf("Atributo: PIB\n");
            printf("%s: %.2f\n", nomeCidade1, pib1);
            printf("%s: %.2f\n", nomeCidade2, pib2);
            if (pib1 > pib2)
                printf("Vencedora: %s\n", nomeCidade1);
            else if (pib2 > pib1)
                printf("Vencedora: %s\n", nomeCidade2);
            else
                printf("Empate!\n");
            break;

        case 4:
            printf("Atributo: Pontos Turisticos\n");
            printf("%s: %d\n", nomeCidade1, pontosTuristicos1);
            printf("%s: %d\n", nomeCidade2, pontosTuristicos2);
            if (pontosTuristicos1 > pontosTuristicos2)
                printf("Vencedora: %s\n", nomeCidade1);
            else if (pontosTuristicos2 > pontosTuristicos1)
                printf("Vencedora: %s\n", nomeCidade2);
            else
                printf("Empate!\n");
            break;

        case 5:
            printf("Atributo: Densidade Demografica (menor vence)\n");
            printf("%s: %.2f\n", nomeCidade1, densidadepopulacional1);
            printf("%s: %.2f\n", nomeCidade2, densidadepopulacional2);
            if (densidadepopulacional1 < densidadepopulacional2)
                printf("Vencedora: %s\n", nomeCidade1);
            else if (densidadepopulacional2 < densidadepopulacional1)
                printf("Vencedora: %s\n", nomeCidade2);
            else
                printf("Empate!\n");
            break;

        case 6:
            printf("Atributo: PIB per Capita\n");
            printf("%s: %.2f\n", nomeCidade1, pibpercapta1);
            printf("%s: %.2f\n", nomeCidade2, pibpercapta2);
            if (pibpercapta1 > pibpercapta2)
                printf("Vencedora: %s\n", nomeCidade1);
            else if (pibpercapta2 > pibpercapta1)
                printf("Vencedora: %s\n", nomeCidade2);
            else
                printf("Empate!\n");
            break;

        case 7:
            printf("Atributo: Super Poder\n");
            printf("%s: %.2f\n", nomeCidade1, superpoder1);
            printf("%s: %.2f\n", nomeCidade2, superpoder2);
            if (superpoder1 > superpoder2)
                printf("Vencedora: %s\n", nomeCidade1);
            else if (superpoder2 > superpoder1)
                printf("Vencedora: %s\n", nomeCidade2);
            else
                printf("Empate!\n");
            break;

        default:
            printf("Opcao invalida!\n");
            break;
    }

    return 0;
}