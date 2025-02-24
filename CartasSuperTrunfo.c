#include <stdio.h>

int main() {
    // Definição das informações da primeira carta
    char estado1 = 'B';
    char codigo1[] = "B01";
    char nome1[] = "Salvador";
    int populacao1 = 2886698;
    float area1 = 693.80;
    float pib1 = 63.53;
    int pontos1 = 40;

    // Definição das informações da segunda carta
    char estado2 = 'A';
    char codigo2[] = "A02";
    char nome2[] = "Maceió";
    int populacao2 = 1029129;
    float area2 = 509.32;
    float pib2 = 24.30;
    int pontos2 = 25;
    
    // Exibição das informações da primeira carta
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos1);
    
    // Exibição das informações da segunda carta
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos2);
    
    return 0;
}
