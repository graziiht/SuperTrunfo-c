#include <stdio.h>

int main() {
    // --- VARIÁVEIS CARTA 1 ---
    char estado1 = 'A', codigo1[4] = "A01", cidade1[50] = "Brasilia";
    unsigned long int populacao1 = 2817000;
    float area1 = 5760.78, pib1 = 286.9;
    int pontos1 = 45;
    float densidade1, pibPerCapita1;

    // --- VARIÁVEIS CARTA 2 ---
    char estado2 = 'B', codigo2[4] = "B01", cidade2[50] = "Salvador";
    unsigned long int populacao2 = 2418000;
    float area2 = 6981.82, pib2 = 63.9;
    int pontos2 = 30;
    float densidade2, pibPerCapita2;

    // --- CÁLCULOS ---
    densidade1 = (float)populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / (float)populacao1;

    densidade2 = (float)populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / (float)populacao2;

    // --- EXIBIÇÃO E COMPARAÇÃO (Requisito 3, 4 e 5) ---
    // Escolhemos o atributo: POPULAÇÃO
    printf("Comparacao de cartas (Atributo: Populacao):\n\n");
    
    printf("Carta 1 - %s (%c): %lu\n", cidade1, estado1, populacao1);
    printf("Carta 2 - %s (%c): %lu\n", cidade2, estado2, populacao2);

    // Lógica de decisão para determinar o vencedor
    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } else if (populacao2 > populacao1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    } else {
        printf("Resultado: Empate!\n");
    }

    printf("\n------------------------------------\n");

    // Exemplo especial: COMPARAÇÃO POR DENSIDADE (Menor valor vence)
    printf("Comparacao de cartas (Atributo: Densidade Populacional):\n\n");
    
    printf("Carta 1 - %s: %.2f hab/km²\n", cidade1, densidade1);
    printf("Carta 2 - %s: %.2f hab/km²\n", cidade2, densidade2);

    if (densidade1 < densidade2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } else if (densidade2 < densidade1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}