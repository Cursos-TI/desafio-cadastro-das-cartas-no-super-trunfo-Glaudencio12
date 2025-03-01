#include <stdio.h>
#include <string.h>

int main() {
    // DECLARAÇÃO DAS VARIÁVEIS DA CARTA1 E CARTA2
    char estado1, estado2;
    char cod_carta1[5], cod_carta2[5], cidade1[40], cidade2[40];
    int populacao1, populacao2, pontos_turisticos1, pontos_turisticos2;
    float area1, area2, PIB1, PIB2, densi_populacional1, densi_populacional2, PIB_per_capita1, PIB_per_capita2;

    printf("DADOS CARTA 1 ----->\n");
    printf("Estado: ");
    estado1 = getchar(); // LÊ UM ÚNICO CARACTERE PARA O ESTADO
    getchar(); // LIMPA O \n DEIXADO NO BUFFER PELO ÚLTIMO SCANF

    printf("Código da carta: ");
    fgets(cod_carta1, sizeof(cod_carta1), stdin); // LÊ ENTRADAS COM ESPAÇO, POR EXEMPLO: SÃO PAULO
    cod_carta1[strcspn(cod_carta1, "\n")] = 0; // REMOVE O \n DE fgets

    printf("Cidade: ");
    fgets(cidade1, sizeof(cidade2), stdin); // LÊ ENTRADAS COM ESPAÇO, POR EXEMPLO: SÃO PAULO
    cidade1[strcspn(cidade1, "\n")] = 0; // REMOVE O \n DE fgets

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área em Km²: ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &PIB1);

    printf("Númeor de pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);
    getchar();

    printf("\nDADOS CARTA 2 ----->\n");
    printf("Estado: ");
    estado2 = getchar();
    getchar(); // LIMPA O \n DEIXADO NO BUFFER PELO ÚLTIMO SCANF

    printf("Código da carta: ");
    fgets(cod_carta2, sizeof(cod_carta2), stdin); // LÊ ENTRADAS COM ESPAÇO, POR EXEMPLO: SÃO PAULO
    cod_carta2[strcspn(cod_carta2, "\n")] = 0; // REMOVE O \n DE fgets

    printf("Cidade: ");
    fgets(cidade2, sizeof(cidade2), stdin); // LÊ ENTRADAS COM ESPAÇO, POR EXEMPLO: SÃO PAULO
    cidade2[strcspn(cidade2, "\n")] = 0; // REMOVE O \n DE fgets

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área em Km²: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &PIB2);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);
    getchar(); // LIMPA O \n DEIXADO NO BUFFER PELO ÚLTIMO SCANF

    //CALCULANDO A DENSIDADE POPULACIONAL
    densi_populacional1 = populacao1 / area1;
    densi_populacional2 = populacao2 / area2;

    //CALCULANDO O PIB PER CAPITA
    PIB_per_capita1 = PIB1 / populacao1;
    PIB_per_capita2 = PIB2 / populacao2;

    // EXIBIÇÃO DOS RESULTADOS
    printf("\nCarta1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", cod_carta1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("Populção: %d\n", populacao1);
    printf("Área: %.2f km² \n", area1);
    printf("PIB: %.2f bilhões de reais\n", PIB1);
    printf("Número de pontos turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densi_populacional1);
    printf("PIB per Capita: %.2f reais\n", PIB_per_capita1);

    printf("\nCarta2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", cod_carta2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("Populção: %d\n", populacao2);
    printf("Área: %.2f km² \n", area2);
    printf("PIB: %.2f bilhões de reais\n", PIB2);
    printf("Número de pontos turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densi_populacional2);
    printf("PIB per Capita: %.2f reais\n", PIB_per_capita2);

    return 0;
}
