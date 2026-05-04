#include <stdio.h>

int main() {
    // --- VARIÁVEIS CARTA 1 ---
    char estado1 = 'G', codigo1[] = "G01", cidade1[50] = "Brasilia";
    unsigned long int populacao1 = 2817000; // Tipo atualizado
    float area1 = 5760.78, pib1 = 286.9; 
    int pontos1 = 45;
    float densidade1, pibPerCapita1, superPoder1;

    // --- VARIÁVEIS CARTA 2 ---
    char estado2 = 'B', codigo2[] = "B01", cidade2[50] = "Salvador";
    unsigned long int populacao2 = 2418000; // Tipo atualizado
    float area2 = 69.82, pib2 = 63.9;
    int pontos2 = 30;
    float densidade2, pibPerCapita2, superPoder2;

    // --- CÁLCULOS ---
    // Carta 1
    densidade1 = (float)populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / (float)populacao1;
    // Super Poder: Soma de tudo (usando o inverso da densidade)
    superPoder1 = (float)populacao1 + area1 + (pib1 * 1000000000) + (float)pontos1 + pibPerCapita1 + (1.0 / densidade1);

    // Carta 2
    densidade2 = (float)populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / (float)populacao2;
    superPoder2 = (float)populacao2 + area2 + (pib2 * 1000000000) + (float)pontos2 + pibPerCapita2 + (1.0 / densidade2);

    // --- COMPARAÇÃO E RESULTADOS ---
    printf("--- COMPARACAO DE CARTAS ---\n\n");

    // O resultado (1) significa que a Carta 1 venceu, (0) que a Carta 2 venceu
    printf("Populacao: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Area: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turisticos: Carta 1 venceu (%d)\n", pontos1 > pontos2);
    
    // ATENÇÃO: Na densidade, o MENOR vence
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade1 < densidade2);
    
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibPerCapita1 > pibPerCapita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", superPoder1 > superPoder2);

    return 0;
}