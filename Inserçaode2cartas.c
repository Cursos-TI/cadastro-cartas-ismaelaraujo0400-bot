#include <stdio.h>

int main() {

    // ---------------- VARIÁVEIS CARTA 1 ----------------
    char estado1;
    char codigo1[4];
    char nomeCidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    float densidade1;
    float pibPerCapita1;
    float superPoder1;

    // ---------------- VARIÁVEIS CARTA 2 ----------------
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    float densidade2;
    float pibPerCapita2;
    float superPoder2;

    // ---------------- LEITURA CARTA 1 ----------------
    printf("=== Cadastro da Carta 1 ===\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Codigo (ex: A01): ");
    scanf("%s", codigo1);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade1);

    printf("Populacao: ");
    scanf("%lu", &populacao1);

    printf("Area (em km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos1);

    // ---------------- CÁLCULOS CARTA 1 ----------------
    densidade1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000.0f) / populacao1;
    superPoder1 = (float)populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + (1.0f / densidade1);

    // ---------------- LEITURA CARTA 2 ----------------
    printf("\n=== Cadastro da Carta 2 ===\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Codigo (ex: B01): ");
    scanf("%s", codigo2);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade2);

    printf("Populacao: ");
    scanf("%lu", &populacao2);

    printf("Area (em km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // ---------------- CÁLCULOS CARTA 2 ----------------
    densidade2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000.0f) / populacao2;
    superPoder2 = (float)populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + (1.0f / densidade2);

    // ---------------- COMPARAÇÕES ----------------
    int compPop = populacao1 > populacao2;
    int compArea = area1 > area2;
    int compPib = pib1 > pib2;
    int compPontos = pontosTuristicos1 > pontosTuristicos2;
    int compDensidade = densidade1 < densidade2; // menor vence
    int compPibPerCapita = pibPerCapita1 > pibPerCapita2;
    int compSuperPoder = superPoder1 > superPoder2;

    // ---------------- EXIBIÇÃO DOS RESULTADOS ----------------
    printf("\n\n===== COMPARAÇÃO DE CARTAS =====\n");

    printf("Populacao: Carta 1 venceu (%d)\n", compPop);
    printf("Area: Carta 1 venceu (%d)\n", compArea);
    printf("PIB: Carta 1 venceu (%d)\n", compPib);
    printf("Pontos Turisticos: Carta 1 venceu (%d)\n", compPontos);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", compDensidade);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", compPibPerCapita);
    printf("Super Poder: Carta 1 venceu (%d)\n", compSuperP
