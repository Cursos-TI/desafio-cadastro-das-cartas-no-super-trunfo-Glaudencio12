#include <stdio.h>
#include <string.h>

int main() {
    // Declaração das variáveis
    // Carta 1
    char estado1;
    char cod_carta1[8], cidade1[40];
    int populacao1, pontos_turisticos1;
    float area1, PIB1;

    // Carta 2
    char estado2;
    char cod_carta2[8], cidade2[40];
    int populacao2, pontos_turisticos2;
    float area2, PIB2;

    // Entrada para carta 1
    printf("Preencha os dados da carta 1 abaixo ----->\n");

    printf("Estado: ");
    estado1 = getchar(); // Lê um único caractere para o estado
    getchar(); // Limpa o '\n' deixado no buffer

    printf("Código da carta: ");
    fgets(cod_carta1, sizeof(cod_carta1), stdin); // Lê entradas com espaços. Ex: São Paulo
    cod_carta1[strcspn(cod_carta1, "\n")] = 0;  // Remove o '\n' de fgets

    printf("Nome da cidade: ");
    fgets(cidade1, sizeof(cidade1), stdin); // Lê entradas com espaços. Ex: São Paulo
    cidade1[strcspn(cidade1, "\n")] = 0;  // Remove o '\n' de fgets

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área em km²: ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &PIB1);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);
    getchar(); // Limpa o '\n' deixado no buffer pelo último scanf

    // Entrada para carta 2
    printf("\nPreencha os dados da carta 2 abaixo ----->\n");

    printf("Estado: ");
    estado2 = getchar(); // Lê um único caractere para o estado
    getchar(); // Limpa o '\n' deixado no buffer

    printf("Código da carta: ");
    fgets(cod_carta2, sizeof(cod_carta2), stdin); // Lê entradas com espaços. Ex: São Paulo
    cod_carta2[strcspn(cod_carta2, "\n")] = 0;  // Remove o '\n' de fgets

    printf("Nome da cidade: ");
    fgets(cidade2, sizeof(cidade2), stdin); // Lê entradas com espaços. Ex: São Paulo
    cidade2[strcspn(cidade2, "\n")] = 0;  // Remove o '\n' de fgets

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área em km²: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &PIB2);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);
    getchar(); // Limpa o '\n' deixado no buffer pelo último scanf

    // Exibição dos resultados
    printf("\nCarta 1: \n");
    printf("Estado: %c \n", estado1);
    printf("Código: %s \n", cod_carta1);
    printf("Nome da Cidade: %s \n", cidade1);
    printf("População: %d \n", populacao1);
    printf("Área: %.2f km² \n", area1);
    printf("PIB: %.2f bilhões de reais \n", PIB1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);

    printf("\nCarta 2: \n");
    printf("Estado: %c \n", estado2);
    printf("Código: %s \n", cod_carta2);
    printf("Nome da Cidade: %s \n", cidade2);
    printf("População: %d \n", populacao2);
    printf("Área: %.2f km² \n", area2);
    printf("PIB: %.2f bilhões de reais \n", PIB2);
    printf("Número de Pontos Turísticos: %d", pontos_turisticos2);

    return 0;
}
