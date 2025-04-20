#include <stdio.h>

int main() {
    printf("Cartas Super Trunfo!/n");
    // Dados da primeira carta
    char codigo1[4];
    int populacao1;
    float area1;
    float pib1;
    int pontos1;

    // Dados da segunda carta
    char codigo2[4];
    int populacao2;
    float area2;
    float pib2;
    int pontos2;

    // Entrada dos dados da primeira carta
    printf("Cadastro da Carta 1\n");
    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área (em km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos1);

    // Entrada dos dados da segunda carta
    printf("\nCadastro da Carta 2\n");
    printf("Código da Carta (ex: B02): ");
    scanf("%s", codigo2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área (em km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos2);

    // Exibição dos dados
    printf("\n--- Carta 1 ---\n");
    printf("Código: %s\n", codigo1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Pontos Turísticos: %d\n", pontos1);

    printf("\n--- Carta 2 ---\n");
    printf("Código: %s\n", codigo2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos Turísticos: %d\n", pontos2);

    return 0;
}
