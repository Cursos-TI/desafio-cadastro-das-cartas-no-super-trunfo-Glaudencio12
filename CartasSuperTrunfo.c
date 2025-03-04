#include <stdio.h>
#include <string.h>

int main()
{
   // DECLARAÇÃO DAS VARIÁVEIS DA CARTA1 E CARTA2
   char pais1[20], pais2[20];
   char cod_carta1[5], cod_carta2[5];
   unsigned long int populacao1, populacao2;
   int pontos_turisticos1, pontos_turisticos2, escolha_usuario;
   float area1, area2, PIB1, PIB2, densi_populacional1, densi_populacional2, PIB_per_capita1,
   PIB_per_capita2, super_poder1, super_poder2;

   printf("DADOS CARTA 1 ----->\n");
   printf("País: ");
   fgets(pais1, sizeof(pais1), stdin);
   pais1[strcspn(pais1, "\n")] = 0;

   printf("Código da carta: ");
   fgets(cod_carta1, sizeof(cod_carta1), stdin); // LÊ ENTRADAS COM ESPAÇO, POR EXEMPLO: SÃO PAULO
   cod_carta1[strcspn(cod_carta1, "\n")] = 0;    // REMOVE O \n DE fgets

   printf("População: ");
   scanf("%lu", &populacao1);

   printf("Área em Km²: ");
   scanf("%f", &area1);

   printf("PIB: ");
   scanf("%f", &PIB1);

   printf("Númeor de pontos turísticos: ");
   scanf("%d", &pontos_turisticos1);
   getchar();

   printf("\nDADOS CARTA 2 ----->\n");
   printf("País: ");
   fgets(pais2, sizeof(pais2), stdin);
   pais2[strcspn(pais2, "\n")] = 0;

   printf("Código da carta: ");
   fgets(cod_carta2, sizeof(cod_carta2), stdin); // LÊ ENTRADAS COM ESPAÇO, POR EXEMPLO: SÃO PAULO
   cod_carta2[strcspn(cod_carta2, "\n")] = 0;    // REMOVE O \n DE fgets

   printf("População: ");
   scanf("%lu", &populacao2);

   printf("Área em Km²: ");
   scanf("%f", &area2);

   printf("PIB: ");
   scanf("%f", &PIB2);

   printf("Número de pontos turísticos: ");
   scanf("%d", &pontos_turisticos2);
   getchar(); // LIMPA O \n DEIXADO NO BUFFER PELO ÚLTIMO SCANF

   // CALCULANDO A DENSIDADE POPULACIONAL
   densi_populacional1 = populacao1 / area1;
   densi_populacional2 = populacao2 / area2;

   // CALCULANDO O SUPER PODER DA CARTA 1
   super_poder1 = (1 / densi_populacional1) + populacao1 + area1 + PIB1 + pontos_turisticos1 + PIB_per_capita1;

   // CALCULANDO O PIB PER CAPITA
   PIB_per_capita1 = PIB1 / populacao1;
   PIB_per_capita2 = PIB2 / populacao2;

   // CALCULANDO O SUPER PODER DA CARTA 2
   super_poder2 = (1 / densi_populacional2) + populacao2 + area2 + PIB2 + pontos_turisticos2 + PIB_per_capita2;

   // EXIBIÇÃO DOS RESULTADOS
   printf("\nCarta1:\n");
   printf("País: %s\n", pais1);
   printf("Código: %s\n", cod_carta1);
   printf("População: %lu \n", populacao1);
   printf("Área: %.2f km² \n", area1);
   printf("PIB: %.2f bilhões de reais\n", PIB1);
   printf("Número de pontos turísticos: %d\n", pontos_turisticos1);
   printf("Densidade Populacional: %.2f hab/km²\n", densi_populacional1);
   printf("PIB per Capita: %.6f reais\n", PIB_per_capita1);
   printf("Super poder: %.2f\n", super_poder1);

   printf("\nCarta2:\n");
   printf("País: %s\n", pais2);
   printf("Código: %s\n", cod_carta2);
   printf("População: %lu\n", populacao2);
   printf("Área: %.2f km² \n", area2);
   printf("PIB: %.2f bilhões de reais\n", PIB2);
   printf("Número de pontos turísticos: %d\n", pontos_turisticos2);
   printf("Densidade Populacional: %.2f hab/km²\n", densi_populacional2);
   printf("PIB per Capita: %.6f reais\n", PIB_per_capita2);
   printf("Super poder: %.2f\n", super_poder2);

   // COMPARANDO AS CARTAS CONFORME A ESCOLHA DE ATRIBUTO PELO USUÁRIO
   // MENU DE OPÇOES
   printf("\n===========MENU===========\n");
   printf("ESCOLHA UM ATRIBUTO DE COMPARAÇÃO ENTRE AS DUAS CARTAS:\n");
   printf("1 - População\n");
   printf("2 - Área\n");
   printf("3 - PIB\n");
   printf("4 - Número de pontos turísticos\n");
   printf("5 - Densidade demográfica\n");
   printf("ESCOLHA UMA OPÇÃO: ");
   scanf("%d", &escolha_usuario); // VARIÁVEL DE CONTROLE DO SWITCH
   
   switch (escolha_usuario){
      case 1:
         // EXIBINDO AS INFORMAÇÕES COMPLEMENTARES DO RESULTADO DA COMPARAÇÃO
         printf("\nPaís1: %s\n", pais1);
         printf("País2: %s\n", pais2);
         printf("Atributo cmparado: População\n");
         printf("Valor do atributo para a Carta 1: %lu\n", populacao1);
         printf("Valor do atributo para a Carta 2: %lu\n", populacao2);  

         if (populacao1 != populacao2){ // VERIFICA SE OS VALORES SÃO DIFERENTES, SE FOREM, PASSA PARA O IF ANINHADO
            if (populacao1 > populacao2){ // VERIFICA QUAL É MAIOR
               printf("Vencedor: Carta 1 - País: %s \n", pais1);
            }
            else{
               printf("Vencedor: Carta 2 - País: %s \n", pais2);
            }
         }else{ // SE OS VALORES FOREM IGUAIS A INSTRUÇÃO DENTRO DO ELSE É EXECUTADA
            printf("Empate na comparação\n");
         }
         break;

      case 2:
         // EXIBINDO AS INFORMAÇÕES COMPLEMENTARES DO RESULTADO DA COMPARAÇÃO
         printf("\nPaís: %s\n", pais1);
         printf("País2: %s\n", pais2);
         printf("Atributo cmparado: Área\n");
         printf("Valor do atributo para a Carta 1: %.2f\n", area1);
         printf("Valor do atributo para a Carta 2: %.2f\n", area2);

         if (area1 != area2){ // VERIFICA SE OS VALORES SÃO DIFERENTES, SE FOREM, PASSA PARA O IF ANINHADO
            if (area1 > area2){ // VERIFICA QUAL É MAIOR
               printf("Vencedor: Carta 1 - País: %s \n", pais1);
            }
            else{
               printf("Vencedor: Carta 2 - País: %s \n", pais2);
            }
         }else{ // SE OS VALORES FOREM IGUAIS A INSTRUÇÃO DENTRO DO ELSE É EXECUTADA
            printf("Empate na comparação\n");
         }
         break;

      case 3: 
         // EXIBINDO AS INFORMAÇÕES COMPLEMENTARES DO RESULTADO DA COMPARAÇÃO
         printf("\nPaís: %s\n", pais1);
         printf("País2: %s\n", pais2);
         printf("Atributo cmparado: PIB\n");
         printf("Valor do atributo para a Carta 1: %.2f\n", PIB1);
         printf("Valor do atributo para a Carta 2: %.2f\n", PIB2);

         if (PIB1 != PIB2){  // VERIFICA SE OS VALORES SÃO DIFERENTES, SE FOREM, PASSA PARA O IF ANINHADO
            if (PIB1 > PIB2){  // VERIFICA QUAL É MAIOR
               printf("Vencedor: Carta 1 - País: %s \n", pais1);
            }
            else{
               printf("Vencedor: Carta 2 - País: %s \n", pais2);
            }
         }else{  // SE OS VALORES FOREM IGUAIS A INSTRUÇÃO DENTRO DO ELSE É EXECUTADA
            printf("Empate na comparação\n");
         }
         break;  
         
      case 4:
         // EXIBINDO AS INFORMAÇÕES COMPLEMENTARES DO RESULTADO DA COMPARAÇÃO
         printf("\nPaís: %s\n", pais1);
         printf("País2: %s\n", pais2);
         printf("Atributo cmparado: Pontos Turísticos\n");
         printf("Valor do atributo para a Carta 1: %d\n", pontos_turisticos1);
         printf("Valor do atributo para a Carta 2: %d\n", pontos_turisticos2); 
         
         if (pontos_turisticos1 != pontos_turisticos2){ // VERIFICA SE OS VALORES SÃO DIFERENTES, SE FOREM, PASSA PARA O IF ANINHADO
            if (pontos_turisticos1 > pontos_turisticos2){ // VERIFICA QUAL É MAIOR
               printf("Vencedor: Carta 1 - País: %s \n", pais1);
            }
            else{
               printf("Vencedor: Carta 2 - País: %s \n", pais2);
            }
         }else{ // SE OS VALORES FOREM IGUAIS A INSTRUÇÃO DENTRO DO ELSE É EXECUTADA
            printf("Empate na comparação\n");
         }
         break; 

      case 5:
         // EXIBINDO AS INFORMAÇÕES COMPLEMENTARES DO RESULTADO DA COMPARAÇÃO
         printf("\nPaís: %s\n", pais1);
         printf("País2: %s\n", pais2);
         printf("Atributo cmparado: PIB\n");
         printf("Valor do atributo para a Carta 1: %.2f\n", densi_populacional1);
         printf("Valor do atributo para a Carta 2: %.2f\n", densi_populacional2);

         if (densi_populacional1 != densi_populacional2){ // VERIFICA SE OS VALORES SÃO DIFERENTES, SE FOREM, PASSA PARA O IF ANINHADO
            if (densi_populacional1 < densi_populacional2){ // VERIFICA QUAL É MAIOR
               printf("Vencedor: Carta 1 - País: %s \n", pais1);
            }
            else{
               printf("Vencedor: Carta 2 - País: %s \n", pais2);
            }
         }else{ // SE OS VALORES FOREM IGUAIS A INSTRUÇÃO DENTRO DO ELSE É EXECUTADA
            printf("Empate na comparação\n");
         }
         break; 

      default:
         printf("Opcão inválida");
         break;   
      }
   return 0;
}
