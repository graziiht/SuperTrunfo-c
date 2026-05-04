#include<stdio.h>

int main() {
    // --- DADOS DA CARTA 1: BRASILIA
    
    char estado1= 'G';
    char codigo1[]  = "G01";
    char cidade1[50] = "brasilia";
    int populacao1 = 2817000;
    float area1 = 5760.78;
    float pib1 = 286.9;// em bilhoes
    int pontos1 = 45;

    // --- DADOS DA CARTA 2:
    //SALVADOR ---
    
    char estado2 = 'B';
    char codigo2[] = "B01";
    char cidade2[13] = "salvador";
    int populacao2 = 2418000;
    float area2 = 69.82;
    float pib2 = 63.9; // em bilhoes
    int pontos2 = 30;

 printf(" --- SUPER TRUNFO: CIDADES ---\n");

    // Exibindo Carta 1
    printf("\nCarta 1:\n");
    printf("Estado1: %c\n", estado1);
    printf("Código1: %s\n", codigo1);
    printf("Nome da Cidade1: %s\n", cidade1);
    printf("População1: %d\n", populacao1);
    printf("Área1: %.2f km²\n", area1);
    printf("PIB1: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos1);

    printf("------------------------------\n");

    // Exibindo Carta 2
    printf("\nCarta 2:\n");
    printf("Estado2: %c\n", estado2);
    printf("Código2: %s\n", codigo2);
    printf("Nome da Cidade2: %s\n", cidade2);
    printf("População2: %d\n", populacao2);
    printf("Área2: %.2f km²\n", area2);
    printf("PIB2: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos2);

    return 0;
}