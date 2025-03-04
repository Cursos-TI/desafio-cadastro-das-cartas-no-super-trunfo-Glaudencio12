#include <stdio.h>
#include <string.h>

int main()
{
   // DECLARAÇÃO DAS VARIÁVEIS DA CARTA1 E CARTA2
   char pais1[20], pais2[20];
   char cod_carta1[5], cod_carta2[5];
   unsigned long int populacao1, populacao2;
   int pontos_turisticos1, pontos_turisticos2, escolha_usuario1, escolha_usuario2, resultado1, resultado2;
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

   printf("Número de pontos turísticos: ");
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

   // COMPARANDO AS CARTAS CONFORME OS ATRIBUTOS ESCOLHIDOS PELO USUÁRIO
   // MENU DE OPÇOES
   printf("\n===========MENU===========\n");
   printf("ESCOLHA O PRIMEIRO ATRIBUTO DE COMPARAÇÃO ENTRE AS DUAS CARTAS:\n");
   printf("1 - População\n");
   printf("2 - Área\n");
   printf("3 - PIB\n");
   printf("4 - Número de pontos turísticos\n");
   printf("5 - Densidade demográfica\n");
   printf("ESCOLHA UMA OPÇÃO: ");
   scanf("%d", &escolha_usuario1); // VARIÁVEL DE CONTROLE DO SWITCH

   switch (escolha_usuario1)
   {
   case 1:
      resultado1 = (populacao1 > populacao2) ? 1 : 0;
      break;

   case 2:
      resultado1 = (area1 > area2) ? 1 : 0;
      break;

   case 3:
      resultado1 = (PIB1 > PIB2) ? 1 : 0;
      break;

   case 4:
      resultado1 = (pontos_turisticos1 > pontos_turisticos2) ? 1 : 0;
      break;

   case 5:
      resultado1 = (densi_populacional1 < densi_populacional2) ? 1 : 0;
      break;

   default:
      printf("Opcão inválida");
      break;
   }

   printf("\n===========MENU===========\n");
   printf("ESCOLHA O PRIMEIRO ATRIBUTO DE COMPARAÇÃO ENTRE AS DUAS CARTAS:\n");
   printf("1 - População\n");
   printf("2 - Área\n");
   printf("3 - PIB\n");
   printf("4 - Número de pontos turísticos\n");
   printf("5 - Densidade demográfica\n");
   printf("ESCOLHA UMA OPÇÃO: ");
   scanf("%d", &escolha_usuario2); // VARIÁVEL DE CONTROLE DO SWITCH

   if (escolha_usuario1 == escolha_usuario2) // VERIFICA SE AS DUAS ESCOLHAS SÃO IGUAIS, SE FOREM, O PROGRAMA PARA A EXECUÇÃO
   {
      printf("\nVocê não pode escolher o mesmo atributo para a comparação. Tente novamente.\n");
   }
   else // SE OS DOIS ATRIBUTOS NÃO FOREM IGUAIS, A COMPARAÇÃO É REALIZADA
   {
      switch (escolha_usuario2)
      {
      case 1:
         resultado2 = (populacao1 > populacao2) ? 1 : 0;
         break;

      case 2:
         resultado2 = (area1 > area2) ? 1 : 0;
         break;

      case 3:
         resultado2 = (PIB1 > PIB2) ? 1 : 0;
         break;

      case 4:
         resultado2 = (pontos_turisticos1 > pontos_turisticos2) ? 1 : 0;
         break;

      case 5:
         resultado2 = (densi_populacional1 < densi_populacional2) ? 1 : 0;
         break;

      default:
         printf("Opcão inválida");
         break;
      }

      // EXIBINDO OS RESULTADOS DA COMPARAÇÃO
      printf("\n========== RESULTADOS ==========\n");
      printf("País 1: %s\n", pais1);
      printf("País 2: %s\n", pais2);
      printf("Atributos da Carta 1 escolhidos: ");

      // EXIBINDO OS ATRIBUTOS ESCOLHIDOS, JUNTAMENTE COM SEUS VALORES
      if (escolha_usuario1 == 1)printf("População ---> %lu\n", populacao1);
      else if (escolha_usuario1 == 2)printf("Área ---> %.2f\n", area1);
      else if (escolha_usuario1 == 3)printf("PIB ---> %.2f\n", PIB1);
      else if (escolha_usuario1 == 4)printf("Número de pontos turísticos ---> %d\n", pontos_turisticos1);
      else if (escolha_usuario1 == 5)printf("Densidade demográfica ---> %2.f\n", densi_populacional1);

      if (escolha_usuario2 == 1)printf("População ---> %lu\n", populacao2);
      else if (escolha_usuario2 == 2)printf("Área ---> %.2f\n", area2);
      else if (escolha_usuario2 == 3)printf("PIB ---> %.2f\n", PIB2);
      else if (escolha_usuario2 == 4)printf("Número de pontos turísticos ---> %d\n", pontos_turisticos2);
      else if (escolha_usuario2 == 5)printf("Densidade demográfica ---> %2.f\n", densi_populacional2);

      // EXIBINDO O RESULTADO FINAL APÓS A SOMA DOS ATRIBUTOS
      printf("\nResultado da comparação:\n");
      if (resultado1 + resultado2 == 2)
      {
         printf("A carta 1 venceu!\n");
      }
      else if (resultado1 + resultado2 == 0)
      {
         printf("A carta 2 venceu!\n");
      }
      else
      {
         printf("Empate!\n");
      }
   }

   return 0;
}
