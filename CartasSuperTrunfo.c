#include <stdio.h>

int main(){

// Definição das informações da primeira carta (Salvador)
char estado1[] = "A";  
char codigo1[] = "A01";
char nome1[] = "Salvador";
float populacao1 = 2900319; // Habitantes
float area1 = 692.81; // km²
float pib1 = 63.56; // PIB em bilhões de reais (2021)
int pontos1 = 42; // Número estimado de pontos turísticos
float pibpc1 = pib1 * 1000000000 / populacao1; // PIB per capita em reais
float densidade1 = populacao1 / area1; // Habitantes por km²

// Definição das informações da segunda carta (Maceió)
char estado2[] = "B";  
char codigo2[] = "B02";
char nome2[] = "Maceió";
float populacao2 = 1039791; // Habitantes
float area2 = 510.655; // km²
float pib2 = 27.484; // PIB em bilhões de reais (2021)
int pontos2 = 30; // Número estimado de pontos turísticos
float pibpc2 = pib2 * 1000000000 / populacao2; // PIB per capita em reais
float densidade2 = populacao2 / area2; // Habitantes por km²

// Exibição das informações da carta de Salvador
printf("\n=== Carta 1: Salvador (BA) ===\n");
printf("Código: %s\n", codigo1);
printf("Nome da Cidade: %s\n", nome1);
printf("População: %d habitantes\n", (int)populacao1);
printf("Área: %.2f km²\n", area1);
printf("PIB: R$ %.2f bilhões\n", pib1);
printf("Número de Pontos Turísticos: %d\n", pontos1);
printf("Densidade Populacional: %.2f habitantes/km²\n", densidade1);
printf("PIB per Capita: R$ %.2f\n", pibpc1);

// Exibição das informações da carta de Maceió
printf("\n=== Carta 2: Maceió (AL) ===\n");
printf("Código: %s\n", codigo2);
printf("Nome da Cidade: %s\n", nome2);
printf("População: %d habitantes\n", (int)populacao2);
printf("Área: %.3f km²\n", area2);
printf("PIB: R$ %.3f bilhões\n", pib2);
printf("Número de Pontos Turísticos: %d\n", pontos2);
printf("Densidade Populacional: %.2f habitantes/km²\n", densidade2);
printf("PIB per Capita: R$ %.2f\n", pibpc2);

return 0;
}